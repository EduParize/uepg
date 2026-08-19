import express from 'express'
import pg from 'pg'
import dotenv from 'dotenv'
import { deleteProdutoById, getProdutoById, getProdutos, postProduto } from './functions/produtos.js'

dotenv.config()

const { Pool } = pg

export const db = new Pool({
    user: process.env.DB_USER,
    password: process.env.DB_PASSWORD,
    host: process.env.DB_HOST,
    port: process.env.DB_PORT,
    database: process.env.DB_DATABASE,
})

const app = express()
app.use(express.json())

app.get("/produtos", getProdutos)

app.get("/produtos/:id", getProdutoById)

app.post("/produtos", postProduto)

app.delete("/produtos/:id", deleteProdutoById)

app.listen(3000, () => {
    console.log("Iniciado")
})