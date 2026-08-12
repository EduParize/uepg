import express from 'express'
import pg from 'pg'
import dotenv from 'dotenv'
dotenv.config()

const {Pool} = pg;

const db = new Pool({
    user: process.env.DB_USER,
    password:process.env.DB_PASSWORD,
    host:process.env.DB_HOST,
    port:process.env.DB_PORT,
    database:process.env.DB_DBAS,
})

const app = express();
app.use(express.json)
//
app.get("/", async (req, res)=>{
    try{
    const sql = 'SELECT * FROM contatos';

    const contatos = await db.query(sql);

    res.status(200).send(contatos.rows)
}catch(e){
    console.log(e)
    res.status(500).send({erro: 'Um erro ocorreu'})
}
})

app.get("/", async (req, res)=>{
    try{
    const sql = 'SELECT * FROM contatos';

    const contatos = await db.query(sql);

    res.status(200).send(contatos.rows)
}catch(e){
    console.log(e)
    res.status(500).send({erro: 'Um erro ocorreu'})
}
})

app.get("/:id", async (req, res)=>{
    try{
        const id = req.params.id
    const sql = `SELECT * FROM contatos WHERE ${id}`;

    const contatos = await db.query(sql);

    res.status(200).send(contatos.rows)
}catch(e){
    console.log(e)
    res.status(500).send({erro: 'Um erro ocorreu'})
}
})

app.listen(3000, ()=>console.log("API WEB - executando"))