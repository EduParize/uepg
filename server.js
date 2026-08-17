import express from 'express'
import pg from 'pg'
import dotenv from 'dotenv'
dotenv.config()

const { Pool } = pg;

const db = new Pool({
    user: process.env.DB_USER,
    password: process.env.DB_PASSWORD,
    host: process.env.DB_HOST,
    port: process.env.DB_PORT,
    database: process.env.DB_DBAS,
})

const app = express();
app.use(express.json)
//
app.get("/", async (req, res) => {
    try {
        const sql = 'SELECT * FROM contatos';

        const contatos = await db.query(sql);

        res.status(200).send(contatos.rows)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
})

app.get("/", async (req, res) => {
    try {
        const sql = 'SELECT * FROM contatos';

        const contatos = await db.query(sql);

        res.status(200).send(contatos.rows)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
})

app.get("/:id", async (req, res) => {
    const id = req.params.id
    try {
        const sql = `SELECT * FROM contatos WHERE id = ${id}`;

        const contatos = await db.query(sql);

        res.status(200).send(contatos.rows)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
})

app.post("/", async (req, res) => {
    try {
        const { nome, telefone, email, nota, ativo } = req.body;
        const values = [nome, telefone, email, nota, ativo]

        const sql = 'INSERT INTO contatos(nome, telefone, email, nota, ativo) VALUES ($1, $2, $3, $4, $5)'

        const r = await db.query(sql, values)

        res.send(201).send(r);

        res.status(200).send(contatos.rows)
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
})

app.put("/:id", async (req, res) => {
    const id = req.params.id
    const contatoAlterar = req.body;

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
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
})

app.delete("/:id", async (req, res) => {
    /*
    const id = req.params.id

    const sqlFindId = 'SELECT * FROM contatos WHERE id = ' + id
    const contatoDeletar = await db.query(sqlFindId);

    if (contatoDeletar.rowCount == 0) {
        res.status(400).send("Nenhum contato com esse id")
        return;
    }

    try {
        const sql = 'DELETE FROM contatos WHERE id = ' + id;

        const deletar = await db.query(sql);

        res.status(200).send("Contato deletado")
    } catch (e) {
        console.log(e)
        res.status(500).send({ erro: 'Um erro ocorreu' })
    }
        */
       app.delete("/:id", async (req, res) => {
    const { id } = req.params;

    try {
        // Deleta o registro e retorna o id deletado (caso exista)
        const sql = 'DELETE FROM contatos WHERE id = $1 RETURNING id';
        const resultado = await db.query(sql, [id]);

        // Se nenhuma linha foi afetada, o ID não existe
        if (resultado.rowCount === 0) {
            return res.status(404).send({ erro: "Nenhum contato com esse id" });
        }

        return res.status(200).send({ mensagem: "Contato deletado com sucesso" });
    } catch (e) {
        console.error(e);
        return res.status(500).send({ erro: 'Um erro ocorreu no servidor' });
    }
});
})

app.listen(3000, () => console.log("API WEB - executando"))