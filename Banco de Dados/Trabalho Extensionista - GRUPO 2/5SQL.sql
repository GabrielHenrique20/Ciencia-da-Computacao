CREATE TABLE Paciente ( 

    CPF CHAR(11) PRIMARY KEY, 

    Primeiro_Nome VARCHAR(50), 

    Sobrenome VARCHAR(50), 

    Data_Nascimento DATE, 

    Sexo CHAR(1), 

    Contato VARCHAR(15) 

); 

  

CREATE TABLE Acompanhante ( 

    CPF CHAR(11) PRIMARY KEY, 

    Nome VARCHAR(100), 

    Data_Nascimento DATE, 

    Sexo CHAR(1), 

    Contato VARCHAR(15), 

    Grau_Parentesco VARCHAR(50) 

); 

  

CREATE TABLE Paciente_Acompanhante ( 

    Paciente_CPF CHAR(11), 

    Acompanhante_CPF CHAR(11), 

    PRIMARY KEY (Paciente_CPF, Acompanhante_CPF), 

    FOREIGN KEY (Paciente_CPF) REFERENCES Paciente(CPF), 

    FOREIGN KEY (Acompanhante_CPF) REFERENCES Acompanhante(CPF) 

); 

  

CREATE TABLE Doacao ( 

    Id INT PRIMARY KEY, 

    Tipo VARCHAR(50), 

    Quantidade INT, 

    Data DATE, 

    Doador_CPF CHAR(11) 

); 

  

CREATE TABLE Doador ( 

    CPF CHAR(11) PRIMARY KEY, 

    Nome VARCHAR(100), 

    Endereco VARCHAR(255), 

    Contato VARCHAR(15) 

); 

  

ALTER TABLE Doacao 

ADD FOREIGN KEY (Doador_CPF) REFERENCES Doador(CPF); 

  

CREATE TABLE Instituicao ( 

    CNPJ CHAR(14) PRIMARY KEY, 

    Nome VARCHAR(100), 

    Endereco VARCHAR(255), 

    Contato VARCHAR(15) 

); 

  

CREATE TABLE Instituicao_Doacao ( 

    Instituicao_CNPJ CHAR(14), 

    Doacao_Id INT, 

    PRIMARY KEY (Instituicao_CNPJ, Doacao_Id), 

    FOREIGN KEY (Instituicao_CNPJ) REFERENCES Instituicao(CNPJ), 

    FOREIGN KEY (Doacao_Id) REFERENCES Doacao(Id) 

); 

  

CREATE TABLE Eventos ( 

    Numero INT PRIMARY KEY, 

    Nome VARCHAR(100), 

    Data_Inicio DATE, 

    Data_Fim DATE, 

    Descricao TEXT, 

    Tipo VARCHAR(50), 

    Localizacao VARCHAR(255), 

    Instituicao_CNPJ CHAR(14) 

); 

  

ALTER TABLE Eventos 

ADD FOREIGN KEY (Instituicao_CNPJ) REFERENCES Instituicao(CNPJ); 

  

CREATE TABLE Voluntarios ( 

    CPF CHAR(11) PRIMARY KEY, 

    Primeiro_Nome VARCHAR(50), 

    Sobrenome VARCHAR(50), 

    Contato VARCHAR(15), 

    Disponibilidade VARCHAR(50) 

); 

  

CREATE TABLE Voluntarios_Eventos ( 

    Voluntario_CPF CHAR(11), 

    Evento_Numero INT, 

    Horas INT, 

    PRIMARY KEY (Voluntario_CPF, Evento_Numero), 

    FOREIGN KEY (Voluntario_CPF) REFERENCES Voluntarios(CPF), 

    FOREIGN KEY (Evento_Numero) REFERENCES Eventos(Numero) 

); 