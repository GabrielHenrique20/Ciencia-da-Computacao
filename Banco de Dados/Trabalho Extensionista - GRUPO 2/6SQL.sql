INSERT INTO Paciente (CPF, Primeiro_Nome, Sobrenome, Data_Nascimento, Sexo, Contato)   

VALUES   

('12345678901', 'Ana', 'Silva', '1985-06-15', 'F', '11988887777'),   

('98765432100', 'Carlos', 'Santos', '1990-09-22', 'M', '11977776666'),   

('45678912345', 'Mariana', 'Oliveira', '1995-03-10', 'F', '11966665555');   

  

INSERT INTO Acompanhante (CPF, Nome, Data_Nascimento, Sexo, Contato, Grau_Parentesco)   

VALUES   

('12312312312', 'José Lima', '1965-12-20', 'M', '11955554444', 'Pai'),   

('32132132132', 'Beatriz Costa', '1975-04-12', 'F', '11944443333', 'Mãe');   

  

INSERT INTO Paciente_Acompanhante (Paciente_CPF, Acompanhante_CPF)   

VALUES   

('12345678901', '12312312312'),   

('98765432100', '32132132132');   

  

INSERT INTO Doador (CPF, Nome, Endereco, Contato)   

VALUES   

('11122233344', 'Pedro Almeida', 'Rua Flores, 123', '11933332222'),   

('55566677788', 'Laura Mendes', 'Av. Central, 456', '11922221111');   

  

INSERT INTO Doacao (Id, Tipo, Quantidade, Data, Doador_CPF)   

VALUES   

(1, 'Sangue', 3, '2024-11-01', '11122233344'),   

(2, 'Alimentos', 10, '2024-11-05', '55566677788');   

  

INSERT INTO Instituicao (CNPJ, Nome, Endereco, Contato)   

VALUES   

('12345678000199', 'Instituto Esperança', 'Rua Principal, 987', '11911112222');   

  

INSERT INTO Instituicao_Doacao (Instituicao_CNPJ, Doacao_Id)   

VALUES   

('12345678000199', 1),   

('12345678000199', 2);   

  

INSERT INTO Eventos (Numero, Nome, Data_Inicio, Data_Fim, Descricao, Tipo, Localizacao, Instituicao_CNPJ)   

VALUES   

(101, 'Campanha de Doação de Sangue', '2024-12-10', '2024-12-15', 'Evento para doação de sangue', 'Saúde', 'Centro Comunitário', '12345678000199'),   

(102, 'Distribuição de Alimentos', '2024-12-20', '2024-12-20', 'Distribuição de alimentos para famílias carentes', 'Assistência Social', 'Praça Central', '12345678000199');   

  

INSERT INTO Voluntarios (CPF, Primeiro_Nome, Sobrenome, Contato, Disponibilidade)   

VALUES   

('33344455566', 'João', 'Pereira', '11900009999', 'Manhã'),   

('77788899900', 'Fernanda', 'Gomes', '11988889999', 'Tarde');   

  

INSERT INTO Voluntarios_Eventos (Voluntario_CPF, Evento_Numero, Horas)   

VALUES   

('33344455566', 101, 5),   

('77788899900', 102, 4);  