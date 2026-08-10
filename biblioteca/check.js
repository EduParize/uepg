import Joi from 'joi'

const phoneRegex = /^[1-9]{2}9?[0-9]{8}$/;

export const livroModel = Joi.object({
    id: Joi.number().integer().positive().required(),
    titulo: Joi.string().min(3).trim().required(),
    isbn: Joi.string().trim().required(),
    edicao: Joi.string().min(3).trim().required(),
    locado: Joi.boolean().default(false)
})

export const usersModel = Joi.object({
    id: Joi.number().integer().positive().required(),
    nome: Joi.string().min(3).trim().required(),
    cpf: Joi.string().trim().required(),
    email: Joi.string().email().lowercase().trim().required(),
    senha: Joi.string().min(3).trim().required(),
})

export const locacaoModel = Joi.object({
    id_user: Joi.number().integer().positive().required(),
    id_livro: Joi.number().integer().positive().required(),
    status: Joi.boolean().default(false),
})

export const livroModelUpdate = livroModel.fork(['id', 'titulo', 'isbn', 'edicao', 'locado'], (schema) => schema.optional())