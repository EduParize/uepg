import { locacao, indexLocacao } from "../db.js"
import { locacaoModel } from "../check.js"

export function createLocacao(req, res) {

    const { id_user, id_livro } = req.body

    if (!id_user) {
        res.status(400).json({ error: "O id do usuario eh uma propriedade obrigatoria" })
        return
    }
    if (!id_livro) {
        res.status(400).json({ error: "O id do livro eh uma propriedade obrigatoria" })
        return
    }

    const newLocacao = {
        id_user: id_user,
        id_livro: id_livro,
        status: false
    }
    const {error} = locacaoModel.validate(newLocacao)
    
        if(error){
            res.status(400).send({mens: error})
            return
        }
    indexLocacao++
    locacao.push(newLocacao)
    res.status(201).json(newLocacao)

}

export function getLocacao(req, res) {
    if (locacao.length == 0) {
        res.status(200).json({ erro: "Nenhuma locacao cadastrado" })
        return
    }

    res.status(200).json(locacao)

}