CREATE DATABASE pessoas_da_minha_casa;

USE pessoas_da_minha_casa;

CREATE TABLE pessoas (
    id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    nome VARCHAR(30),
    nascimento DATE,
    genero VARCHAR(1)
);

INSERT INTO pessoas (nome, nascimento, genero) VALUES ("Washington De Almeida Lopes", "2003-12-12", "M");
INSERT INTO pessoas (nome, nascimento, genero) VALUES ("Lizane Carla Da Silva Almeida", "1985-09-01", "F");
INSERT INTO pessoas (nome, nascimento, genero) VALUES ("Dominique De Almeida Lopes", "2008-07-10", "F");
INSERT INTO pessoas (nome, nascimento, genero) VALUES ("Marcos Lopes Dos Santos", "1979-07-01", "M");
INSERT INTO pessoas (nome, nascimento, genero) VALUES ("Kaique De Almeida Lopes", "2015-07-12", "M");

