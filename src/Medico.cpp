// src/Medico.cpp

#include "Medico.h"
#include <iostream>

// Para que a implementação funcione, agora precisamos dos detalhes completos
// das classes. Então, no arquivo .cpp, nós incluímos os headers.
// ATENÇÃO: Estes arquivos ainda não existem, mas vamos criá-los em seguida.
// Por enquanto, vamos comentar essas linhas para poder compilar.
// #include "Consulta.h"
// #include "Paciente.h"

/**
 * Construtor do Medico chama o construtor da classe base (Pessoa)
 * para inicializar os atributos herdados.
 */
Medico::Medico(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& crm, const std::string& especialidade)
    : Pessoa(cpf, nome, dataNascimento, telefone), crm(crm), especialidade(especialidade) {
    // Corpo do construtor do Medico
}

Medico::~Medico() {
    // Corpo do destrutor do Medico
}

/**
 * Implementações temporárias dos métodos.
 * Elas nos permitem compilar a classe Medico antes de ter as outras classes prontas.
 * Depois, voltaremos aqui para implementar a lógica real.
 */
void Medico::agendarConsulta(Consulta& consulta) {
    std::cout << "Metodo 'agendarConsulta' chamado pelo medico " << this->nome << "." << std::endl;
    // Lógica real será implementada depois
}

void Medico::cancelarConsulta(Consulta& consulta) {
    std::cout << "Metodo 'cancelarConsulta' chamado pelo medico " << this->nome << "." << std::endl;
    // Lógica real será implementada depois
}

void Medico::emitirAtestado(const Paciente& paciente, const std::string& observacoes) {
    std::cout << "Metodo 'emitirAtestado' chamado para o paciente [NOME DO PACIENTE AQUI]." << std::endl;
    // Lógica real será implementada depois
}

void Medico::solicitarExame(const Paciente& paciente, const std::string& nomeExame) {
    std::cout << "Metodo 'solicitarExame' chamado para o paciente [NOME DO PACIENTE AQUI]." << std::endl;
    // Lógica real será implementada depois
}