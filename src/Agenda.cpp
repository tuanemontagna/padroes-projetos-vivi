// src/Agenda.cpp

#include "Agenda.h"
#include <iostream>
#include <algorithm> // Para usar std::remove_if

Agenda::Agenda() {}
Agenda::~Agenda() {}

void Agenda::adicionarConsulta(const Consulta& consulta) {
    this->consultas.push_back(consulta);
    std::cout << "-> [AGENDA] Consulta adicionada com sucesso." << std::endl;
}

// A implementação de removerConsulta é um pouco mais complexa,
// pois precisamos encontrar a consulta certa no vetor para remover.
void Agenda::removerConsulta(const Consulta& consulta) {
    // Implementação simplificada: remove a primeira consulta que corresponda
    // ao médico, paciente, data e hora.
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
    // Itera por todas as consultas na agenda
    for (const auto& consulta : this->consultas) {
        // Se encontrar uma consulta com a mesma data e hora
        if (consulta.getData() == data && consulta.getHora() == hora) {
            return false; // Horário ocupado
        }
    }
    return true; // Horário disponível
}