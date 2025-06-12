// src/Secretaria.cpp

#include "Secretaria.h"
#include "Agenda.h"
#include "Paciente.h"
#include "Convenio.h" // Inclusão necessária para o método de pagamento
#include <iostream>

Secretaria::Secretaria(const std::string& nome, const std::string& matricula_id)
    : nome(nome), matricula_id(matricula_id) {}

Secretaria::~Secretaria() {}

void Secretaria::agendarConsulta(Agenda& agenda, const Consulta& consulta) {
    std::cout << "\nSecretaria " << this->nome << " esta tentando agendar uma consulta..." << std::endl;
    if (agenda.verificarDisponibilidade(consulta.getData(), consulta.getHora())) {
        std::cout << "Horario disponivel! Agendando..." << std::endl;
        agenda.adicionarConsulta(consulta);
    } else {
        std::cout << "Horario indisponivel." << std::endl;
    }
}

void Secretaria::cancelarConsulta(Agenda& agenda, const Consulta& consulta) {
    std::cout << "\nSecretaria " << this->nome << " esta cancelando uma consulta..." << std::endl;
    agenda.removerConsulta(consulta);
}

void Secretaria::cadastrarPaciente(Paciente& paciente) {
    // Em um sistema real, isso adicionaria o paciente a um banco de dados.
    std::cout << "\nSecretaria " << this->nome << " cadastrou o(a) paciente: " << paciente.getNome() << "." << std::endl;
}

void Secretaria::receberPagamento(Convenio& convenio, Paciente& paciente, double valor) {
    std::cout << "\nSecretaria " << this->nome << " iniciando processo de pagamento para " << paciente.getNome() << "..." << std::endl;
    
    if (convenio.verificarElegibilidade(paciente)) {
        std::string guiaGerada = convenio.gerarGuia(Consulta("", "", 0, nullptr, nullptr));
        convenio.aprovarGuia(guiaGerada);
        convenio.processarPagamento(valor);
    }
}