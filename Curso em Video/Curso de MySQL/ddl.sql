CREATE DATABASE curso_em_video
DEFAULT CHARACTER SET utf8
DEFAULT COLLATE utf8_general_ci;

DROP TABLE nome_da_tabela-nome_da_banco;

CREATE TABLE cad_pessoas (
    id INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(50),
    data_nascimento DATE,
    sexo ENUM('M','F'),
    peso DECIMAL(5,2),
    altura DECIMAL(3,2),
    nascionalidade VARCHAR(20) DEFAULT 'Brasil',
    PRIMARY KEY (id)
) DEFAULT CHARSET = utf8;

ALTER TABLE cad_pessoas ADD COLUMN profissao VARCHAR(15);
ALTER TABLE cad_pessoas DROP COLUMN profissao;

ALTER TABLE cad_pessoas ADD COLUMN apelido VARCHAR(15) AFTER nome;
ALTER TABLE cad_pessoas ADD COLUMN CPF INT FIRST;

ALTER TABLE cad_pessoas DROP COLUMN CPF;

ALTER TABLE cad_pessoas 
CHANGE apelido como_quer_ser_chamado VARCHAR(20);

ALTER TABLE cad_pessoas
MODIFY COLUMN como_quer_ser_chamado VARCHAR(15);

ALTER TABLE cad_pessoas
RENAME TO gafanhotos;

CREATE TABLE IF NOT EXISTS curso (
    nome VARCHAR(15) NOT NULL UNIQUE,
    descricao TEXT,
    garga INT(10) UNSIGNED,
    totaulas INT(10) UNSIGNED,
    ano YEAR DEFAULT '2023'
) DEFAULT CHARSET="utf8";

ALTER TABLE curso ADD COLUMN id INT NOT NULL PRIMARY KEY FIRST;