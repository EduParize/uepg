import { locacao, livros, indexLivros } from "../db.js"

export function createLivro(req, res) {

    const { titulo, isbn, edicao, locado } = req.body

    if (!titulo) {
        res.status(400).json({ error: "O nome eh uma propriedade obrigatoria" })
        return
    }
    if (!isbn) {
        res.status(400).json({ error: "O CPF eh uma propriedade obrigatoria" })
        return
    }
    if (!edicao) {
        res.status(400).json({ error: "O email eh uma propriedade obrigatoria" })
        return
    }

    const newLivro = {
        id_Livro: indexLivros + 1,
        titulo: titulo,
        isbn: isbn,
        edicao: edicao,
        locado: false
    }
    indexLivros++
    livros.push(newLivro)
    res.status(201).json(newLivro)

}

export function getLivros(req, res) {
    if (livros.length == 0) {
        res.status(200).json({ error: "Nenhum livro cadastrado" })
        return
    }

    res.status(200).json(livros)

}

export function getLivroById(req, res) {
    if (livros.length == 0) {
        res.status(200).json({ error: "Nenhum livro cadastrado" })
        return
    }
    const idLivro = req.params.id
    const existe = livros.find((c) => c.id_livro == idLivro)

    if (!existe) {
        res.status(404).json({ error: "Nenhum livro encontrado com esse id" })
        return
    }

    res.status(200).json(existe)

}

export function deleteLivros(req, res) {
    const id = req.params.id

    const indexDelete = users.findIndex((c) => c.id_livro == id)

    if (indexDelete === -1) {
        res.status(404).json({ error: "Nenhum usuario encontrado com esse id" })
        return
    }

    for(let i =locacao.length-1;i>=0;i--){
        if(locacao[i].id_livro==id){
            locacao.splice(i,1)
        }
    }
    users.splice(indexDelete, 1)
    res.send(200).json("Livro deletado")

}

export function updateLivro(req, res) {
    const id = req.body.id
    const livro = livros.find((c) => c.id_livro == id)

    if (!livro) {
        res.status(404).json({ error: "Livro nao encontrado" })
    }

    const newLivro = req.body
    const campos = Object.keys(newLivro)
    for (let c of campos) {
        livro[c] = newLivro[c]
    }
    res.status(200).send(livro)
}