drop database if exists amparo_taxi
create database amparo_taxi;
use amparo_taxi;
create table motorista(
    id int primary key not null auto_increment,
    nome  varchar (100) not null,
    cpf varchar (15)not null unique,
    cnh varchar (20) not null unique,
    celular varchar (15)not null unique,
    avaliacao int (11) not null,
    email varchar (100) not null unique
    obs text 
    status enum ('ATIVO','INATIVO') not null
);
create table veiculo(
    placa varchar (10)not null unique,
    modelo varchar (20)not null,
    marca varchar (20),
    cor varchar (20)not null,
    ano int (11),
    motorista_id int (11) not null
);
create table viagem(
    id int (11) primary key not null auto_increment,
    passageiro_id int (11) not null,
    placa varchar (10) not null unique,
    valor decimal (10,2) not null,
    origem varchar (50) not null,
    hora_partida datetime not null default(curtime()),
    destino varchar (50) not null,
    hora_chegada datetime,
    avaliacao_motorista int,
    avaliacao_passageiro int,
);
create table passageiro(
    id int primary key not null auto_increment,
    nome varchar (100) not null,
    cpf varchar (15) not null unique ,
    avaliacao int,
    obs text,
    status enum ('ATIVO','INATIVO') not null
);

alter table
    veiculo
