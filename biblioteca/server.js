import express from 'express'
import { createUser, deleteUser, getUsers, updateUser } from './functions/users.js'
import { createLivro, getLivros, getLivroById, deleteLivros, updateLivro } from './functions/livros.js'
import { createLocacao, getLocacao } from './functions/locacao.js'

const app = express()

const port = 3000

app.use(express.json())

app.post('/bib/user', createUser)

app.post('/bib/livro', createLivro)

app.post('/bib/locar', createLocacao)

app.get('/bib/user', getUsers)

app.get('/bib/livro', getLivros)

app.get('/bib/livro/:id', getLivroById);

app.get('/bib/locar', getLocacao);

app.put('/:id', updateLivro)

app.put('/:id', updateUser)

app.delete('/:id', deleteUser)

app.delete('/:id', deleteLivros)

app.listen(port, function () {
    console.log('Escutando localhost:' + port)
})