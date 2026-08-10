import { users, indexUser } from "../db.js"
import { usersModel } from "../check.js"
 
export function createUser(req, res) {

    const { nome, cpf, email, senha } = req.body

    if (!nome) {
        res.status(400).json({ error: "O nome eh uma propriedade obrigatoria" })
        return
    }
    if (!cpf) {
        res.status(400).json({ error: "O CPF eh uma propriedade obrigatoria" })
        return
    }
    if (!email) {
        res.status(400).json({ error: "O email eh uma propriedade obrigatoria" })
        return
    }
    if (!senha) {
        res.status(400).json({ error: "A senha eh uma propriedade obrigatoria" })
        return
    }

    const newUser = {
        id_user: indexUser + 1,
        nome: nome,
        cpf: cpf,
        email: email,
        senha: senha
    }

    const {error} = usersModel.validate(newUser)

    if(error){
        res.status(400).send({mens: error})
        return
    }
    indexUser++
    users.push(newUser)
    res.status(201).json(newUser)
}

export function getUsers(req, res) {
    if (users.length == 0) {
        res.status(200).json({ erro: "Nenhum usuario cadastrado" })
        return
    }

    res.status(200).json(users)

}

export function deleteUser(req, res) {
    const id = req.params.id

    const indexDelete = users.findIndex((c) => c.id_user == id)

    if (indexDelete === -1) {
        res.status(404).json({ error: "Nenhum usuario encontrado com esse id" })
        return
    }

    for (let i = locacao.length - 1; i >= 0; i--) {
        if (locacao[i].id_livro == id) {
            locacao.splice(i, 1)
        }
    }

    indexUser--
    users.splice(indexDelete, 1)
    res.send(200).json("Usuario deletado")

}

export function updateUser(req, res) {
    const id = req.body.id
    const usuario = users.find((c) => c.id_livro == id)

    if (!usuario) {
        res.status(404).json({ error: "Usuario nao encontrado" })
    }

    const newUsuario = req.body
    const campos = Object.keys(newUsuario)
    for (let c of campos) {
        usuario[c] = newUsuario[c]
    }
    res.status(200).send(usuario)
}

