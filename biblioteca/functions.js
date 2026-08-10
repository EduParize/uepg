import {users, livros, locacao} from "./db.js"

export function get(req, res) {
    res.json(agenda)
}

export function post(req, res) {

    const contato = req.body

    const existe = agenda.some((c) => c.id === contato.id)
    if (existe) {
        res.status(409).send({ erro: 'ID duplicado.' })
        return
    }

    agenda.push(contato)
    res.status(201).send(contato)

}

export function getById(req, res) {
    const id = parseInt(req.params.id);
    const contato = agenda.find((c) => c.id === id);

    if (!contato) {
        res.status(404).send({ erro: 'ID inexistente.' });
        return;
    }
    res.status(200).send(contato);
}

export function deleteById(req, res) {
    const id = parseInt(req.params.id);

    const indiceContato = agenda.findIndex((c) => c.id === id);

    if (indiceContato === -1) {
        res.status(404).send({ erro: 'Contato inexistente' });
        return;
    }
    const contatoRemovido = agenda.splice(indiceContato, 1);
    res.status(200).send(contatoRemovido);
}

export function updateById(req, res) {
    const idParams = parseInt(req.params.id)
    const contato = agenda.find((c) => c.id === idParams)

    if (!contato) {
        res.status(404).json({ erro: 'ID inexistente.' })
        return
    }
    const contatoAlterar = req.body
    const campos = Object.keys(contatoAlterar)

    for (let c of campos) {
        contato[c] = contatoAlterar[c]
    }
    res.status(200).send(contato)
}