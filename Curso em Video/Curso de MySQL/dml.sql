INSERT INTO cad_pessoas 
VALUES
	(DEFAULT, "Lizane Carla", "Carla", "1985-09-01", "F", "90", "1.65", DEFAULT);

INSERT INTO cad_pessoas 
    (id, nome, data_nascimento, sexo, peso, altura, nascionalidade)
VALUES 
    (DEFAULT, "Washington Lopes", "2003-12-12","M", "106.2", "1.79", "Brasileiro"),
    (DEFAULT, "Kaique Lopes", "2015-07-13", "M", "26.5", "1,07", DEFAULT);

UPDATE nome_da_tabela 
SET Registro_a_ser_atualizado = novo_registro
WHERE atributo_de_identificacao = identificador;

DESC cad_pessoas;