import express from 'express'
import {get, post} from './functions.js'

const app = express()

const port = 3000

app.get('/', get)
app.post('/', function(req, res){
    res.send(post(req, res))
})
app.listen(port, function(){
    console.log('Escutando localhost:' + port)
})