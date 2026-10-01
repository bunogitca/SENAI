drop database if exists gestao_dados;

create database gestao_dados;

use gestao_dados;

create table Cliente (
    id int(11) primary key not null auto_increment,
    nome varchar(100) not null,
    cep varchar(11) not null,
    numero int(11) not null,
    complemento varchar(100)
);

create table Telefone (
    id int(11) primary key not null auto_increment,
    id_cliente int(11) not null,
    numero varchar(15) not null,
    tipo varchar(20) not null
);

create table Produto (
    id int(11) primary key not null auto_increment,
    nome varchar(100) not null
);

create table Pedido (
    id int(11) primary key not null auto_increment,
    id_cliente int(11) not null,
    id_produto int(11) not null,
    valor_unitario decimal(10,2) not null,
    quantidade int(11) not null,
    subtotal decimal(10,2) generated always as (valor_unitario * quantidade) stored
);

alter table Telefone add constraint fk_telefone_cliente 
    foreign key (id_cliente) references Cliente(id);

alter table Pedido add constraint fk_pedido_cliente 
    foreign key (id_cliente) references Cliente(id);

alter table Pedido add constraint fk_pedido_produto 
    foreign key (id_produto) references Produto(id);

show tables;
describe Cliente;
describe Telefone;
describe Produto;
describe Pedido;