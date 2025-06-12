#include "Agenda.h"
#include "Paciente.h" 
#include "Medico.h"   
#include <iostream>
#include <algorithm>

Agenda::Agenda() {}
Agenda::~Agenda() {}

void Agenda::adicionarConsulta(const Consulta& consulta) {
    this->consultas.push_back(consulta);
    std::cout << "-> [AGENDA] Consulta adicionada com sucesso." << std::endl;
}

void Agenda::removerConsulta(const Consulta& consulta) {
    auto it = std::remove_if(consultas.begin(), consultas.end(), 
        [&](const Consulta& c) {
            return c.getData() == consulta.getData() &&
                   c.getHora() == consulta.getHora() &&
                   c.getPaciente() == consulta.getPaciente();
        });

    if (it != consultas.end()) {
        consultas.erase(it, consultas.end());
        std::cout << "-> [AGENDA] Consulta removida com sucesso." << std::endl;
    }
}

bool Agenda::verificarDisponibilidade(const std::string& data, const std::string& hora) const {
    for (const auto& consulta : this->consultas) {
        if (consulta.getData() == data && consulta.getHora() == hora) {
            return false;
        }
    }
    return true;
}

void Agenda::imprimirAgenda() const {
    std::cout << "\n--- Agenda da Clinica ---" << std::endl;
    if (consultas.empty()) {
        std::cout << "Nenhuma consulta agendada." << std::endl;
    }
    for (const auto& c : consultas) {
        std::cout << "Data: " << c.getData() << " | Hora: " << c.getHora()
                  << " | Paciente: " << c.getPaciente()->getNome()
                  << " | Medico: " << c.getMedico()->getNome() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
}