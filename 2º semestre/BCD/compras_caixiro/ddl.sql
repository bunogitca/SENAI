-- DDL (Data Definition Language)
-- CRUD (Create, [Describe, Show], Alter, Drop)
-- Se estamos criando o banco de dados do zero, vamos apagar o banco de dados caso ele exista
drop database if exists compras_caixeiro;
-- Criar o Banco de dados
create database compras_caixeiro;
-- Acessa o Banco de dados
use compras_caixeiro;
-- Criar a tabela de Produtos
create table produto(
    id int primary key not null auto_increment,
    nome varchar(40) not null,
    descricao varchar(200),
    peso decimal(10,2) not null,
    volume decimal(10,2) not null,
    valor decimal(10,2) not null
);
-- Criar a tabela de Fornecedor
create table fornecedor(
    id int primary key not null auto_increment,
    nome varchar(40) not null,
    cidade varchar(40) not null,
    estado varchar(40) not null,
    pais varchar(40) not null,
    referencia varchar(40) not null,
    observacao varchar(200)
);
-- Criar tabela de Compra
create table compra(
    id int primary key not null auto_increment,
    id_produto int not null,
    id_fornecedor int not null,
    data Date default(curdate()) not null,
    quantidade int not null,
    custo_unitario decimal(10,2) not null
);
-- Criar as chaves estrangeiras (Relacionamentos)
alter table compra add constraint possui foreign key (id_produto) references produto(id);
alter table compra add constraint fornece foreign key (id_fornecedor) references fornecedor(id);

-- Vendo as tabelas criadas
show tables;
describe produto;
describe fornecedor;
describe compra;