drop database if exists compras_caixeiro

create database compras_caixeiro;

use compras_caixeiro;

create table produto(
    id int primary key not null auto_increment,
    nome varchar (40),
    descricao varchar(200),
    peso decimal(10,2),
    volume decimal(10,2),
    valor decimal(10,2)
);

create table fornecedor(
    id int primary key not null auto_increment,
	nome	varchar	(40) not null,
	cidade	varchar	(40) not null,
	estado	varchar	(40) not null,
	pais	varchar	(40) not null,
	referencia	varchar	(40) not null,
	observação varchar (200)
);

create table compra(
    id int primary key not null auto_increment,
    id_produto int not null,
    id_fornecedor int not null,
    data Date default cur_date() not null,
    quantidade int not null,
    custo_unitario decimal (10,2) not null,
    foreign key (id_produto) references produto(id),
    foreign key (id_fornecedor) references fornecedor(id)
);

describre