import pg from 'pg'
import { db } from '../server.js'

export async function getProdutos(req, res) {
    try {
        const query = req.query.categoria
        let q = ''
        if (query != null) {
            q = 'WHERE categoria = ' + query
        }

        const sql = 'SELECT * FROM produtos ' + q

        const produtos = await db.query(sql)

        res.status(200).send(produtos)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
}

export async function getProdutoById(req, res) {
    try {
        const id = req.params.id

        const sql = 'SELECT * FROM produtos WHERE id = $1'

        const produto = await db.query(sql, id)

        if (produto.rowCount === 0) {
            res.status(404).send({ erro: "Nenhum produto com esse id" });
            return;
        }

        res.status(200).send(produto)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
}

export async function postProduto(req, res) {
    try {
        const { nome, preco, quantidade_estoque, categoria } = req.body
        const values = [nome, preco, quantidade_estoque, categoria]

        if (!nome) {
            res.status(400).send({ Erro: "O nome eh obrigatorio" })
            return;
        }

        if (!preco) {
            res.status(400).send({ Erro: "O preco eh obrigatorio" })
            return;
        }

        const sql = 'INSERT INTO contato(nome, preco, quantidade_estoque, categoria) VALUES ($1, $2, $3, $4)'
        const novoProduto = pg.query(sql, values)

        res.status(201).send(novoProduto)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
}

export async function putProdutoById(req, res) {
    const id = req.params.id
    const contatoAlterar = req.body

     let sqlTemp = ['UPDATE contatos'];
    sqlTemp.push('SET');
    let temp = [];

    const col = Object.keys(contatoAlterar);

    col.forEach((c, i) => {
        temp.push(c + ' = $' + (i + 1))
    })

    sqlTemp.push(temp.join(', '));

    sqlTemp.push('WHERE id = ' + id + ' RETURNING *');

    const sql = sqlTemp.join(' ');

    let valAtributos = col.map((c) => {
        return contatoAlterar[c];
    });

    try {
        const r = await db.query(sql, valAtributos);
        res.status(200).send(r.rows)
    } catch (e) {
        console.error(e);
        return res.status(500).send({ erro: 'Um erro ocorreu no servidor' });
    }
}

export async function deleteProdutoById(req, res) {
    const id = req.params.id
    try {
        const sql = 'DELETE FROM contato WHERE id = $1 RETURNING id'
        const resultado = await db.query(sql, [id])

        if (resultado.rowCount === 0) {
            return res.status(404).send({ erro: "Nenhum contato com esse id" });
        }

        return res.status(200).send({ mensagem: "Contato deletado com sucesso" });
    } catch (e) {
        console.error(e);
        return res.status(500).send({ erro: 'Um erro ocorreu no servidor' });
    }
}