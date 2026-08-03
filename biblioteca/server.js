import express from 'express'
import {} from './functions.js'

const app = express()

const port = 3000

app.use(express.json())

app.post('/', createUser)

app.post('/', createLivro)

app.post('/', createLocacao)


app.get('/', get)



app.get('/:id', getById );

app.delete('/:id', deleteById)

app.put('/:id', updateById)

app.listen(port, function(){
    console.log('Escutando localhost:' + port)
})