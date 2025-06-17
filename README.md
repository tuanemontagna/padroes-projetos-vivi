# Sistema de Gestão de Clínica Médica com Padrões de Projeto

## 1. Contexto do Projeto

Este projeto foi desenvolvido como requisito para a disciplina de **Engenharia de Software II**, do curso de Ciência da Computação. O principal foco do trabalho é a aplicação prática de padrões de projeto (Design Patterns) na construção de uma arquitetura de software robusta, flexível e de fácil manutenção em C++.

## 2. Objetivo

O objetivo central foi modelar um sistema de gestão para uma clínica médica, implementando não apenas as entidades do domínio (como `Médico`, `Paciente`, `Consulta`), mas também aplicando padrões de projeto arquiteturais para resolver problemas comuns de acoplamento e complexidade.

## 3. Arquitetura e Padrões de Projeto Aplicados

A arquitetura do sistema foi desenhada para ser desacoplada e organizada. Para isso, foram utilizados os seguintes padrões de projeto do "Gang of Four" (GoF):

### Padrão Factory Method 

* **Problema:** A criação de objetos como `Medico`, `Paciente` e `Secretaria` estava espalhada pelo código cliente (inicialmente, `main.cpp`). Isso tornava o sistema rígido, pois qualquer alteração no construtor de uma classe exigiria mudanças em vários locais.
* **Solução:** Foi implementado o padrão `Factory` para delegar a responsabilidade da criação de objetos a classes especialistas (as "Fábricas").
    * Uma interface `IPessoaFactory` foi criada para definir um contrato comum para todas as fábricas que criam tipos de `Pessoa`.
    * As classes `MedicoFactory` e `PacienteFactory` implementam esta interface, encapsulando a lógica de como instanciar um `Medico` e um `Paciente`, respetivamente.
    * Uma `SecretariaFactory` independente também foi criada.
* **Benefícios:** A criação de objetos é centralizada, o código cliente é desacoplado das classes concretas e o sistema torna-se muito mais flexível para adicionar novos tipos de atores no futuro.

### Padrão Facade 

* **Problema:** Após a criação de todas as classes do sistema (`Agenda`, `Factories`, `Prontuario`, etc.), o cliente precisaria de conhecer e orquestrar múltiplos objetos para realizar uma única tarefa, como agendar uma consulta. Isso cria uma barreira de complexidade.
* **Solução:** Foi implementada a classe `ClinicaFacade`, que serve como uma "fachada" ou um ponto de entrada único e simplificado para todo o subsistema da clínica.
* **Benefícios:** A `Facade` esconde a complexidade interna do sistema, reduz o acoplamento do cliente com os componentes internos e fornece uma API de alto nível com métodos que representam fluxos de trabalho claros (ex: `agendarConsultaCompleta`).

## 4. Estrutura de Pastas

O projeto está organizado da seguinte forma para manter a separação de responsabilidades:
* `include/`: Contém todos os arquivos de cabeçalho (`.h`).
* `src/`: Contém todos os arquivos de implementação (`.cpp`).
* `obj/`: Armazena os arquivos objeto (`.o`) gerados durante a compilação (ignorado pelo Git).
* `bin/`: Armazena o programa executável final (ignorado pelo Git).
* `Makefile`: Arquivo de compilação inteligente para automatizar o build.

## 5. Como Compilar e Executar

**Pré-requisitos:**
* Um compilador C++ moderno (g++)
* O utilitário `make`

Na pasta raiz do projeto, execute os seguintes comandos no terminal:

```bash
# Para compilar o projeto (só compila o que foi alterado)
make

# Para limpar todos os arquivos gerados
make clean

# Para executar o programa após a compilação
./bin/programa
```
