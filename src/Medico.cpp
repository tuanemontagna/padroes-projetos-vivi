#include "Medico.h"
#include <iostream>

Medico::Medico(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& crm, const std::string& especialidade)
    : Pessoa(cpf, nome, dataNascimento, telefone), crm(crm), especialidade(especialidade) {
}

Medico::~Medico() {
}

void Medico::agendarConsulta(Consulta& consulta) {
    std::cout << "Metodo 'agendarConsulta' chamado pelo medico " << this->nome << "." << std::endl;
}

void Medico::cancelarConsulta(Consulta& consulta) {
    std::cout << "Metodo 'cancelarConsulta' chamado pelo medico " << this->nome << "." << std::endl;
}

void Medico::emitirAtestado(const Paciente& paciente, const std::string& observacoes) {
    std::cout << "Metodo 'emitirAtestado' chamado para o paciente [NOME DO PACIENTE AQUI]." << std::endl;
}

void Medico::solicitarExame(const Paciente& paciente, const std::string& nomeExame) {
    std::cout << "Metodo 'solicitarExame' chamado para o paciente [NOME DO PACIENTE AQUI]." << std::endl;
}