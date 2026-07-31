import agenda from "./db.js"

export function get(req, res){
    res.json(agenda)
}

export function post(req, res){
    let nome = input()
    agenda[agenda.length].id = agenda.length+1
    agenda[agenda.length].nome = req.nome
    agenda[agenda.length].telefone = req.telefone
    
}