drop database if exists clinica_medica;

create database clinica_medica;

use clinica_medica;

create table T_PACIENTE (
    id_paciente int primary key not null auto_increment,
    nome varchar(100) not null,
    cpf varchar(11) unique not null,
    data_nascimento date not null,
    telefone varchar(15) not null,
    email varchar(100) null
);

create table T_MEDICO (
    id_medico int primary key not null auto_increment,
    nome varchar(100) not null,
    crm varchar(20) unique not null,
    especialidade varchar(50) not null,
    telefone varchar(15) null,
    email varchar(100) null
);

create table T_CONSULTA (
    id_consulta int primary key not null auto_increment,
    data date not null,
    hora time not null,
    status varchar(20) not null,
    id_paciente int not null,
    id_medico int not null
);

alter table T_CONSULTA add constraint fk_consulta_paciente 
    foreign key (id_paciente) references T_PACIENTE(id_paciente);

alter table T_CONSULTA add constraint fk_consulta_medico 
    foreign key (id_medico) references T_MEDICO(id_medico);

show tables;
describe T_PACIENTE;
describe T_MEDICO;
describe T_CONSULTA;