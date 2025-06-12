// main.cpp (Totalmente Atualizado)

#include <iostream>
#include "Medico.h"
#include "Paciente.h"
#include "Consulta.h"
#include "Agenda.h"
#include "Secretaria.h"
#include "Lembrete.h" // Incluindo a nova classe

int main() {
    std::cout << "--- Sistema da Clinica (Data: 12/06/2025) ---" << std::endl;

    // 1. Infraestrutura e funcionários
    Agenda agendaDaClinica;
    Secretaria secretaria1("Carla", "SEC-001");
    Medico medico1("Dra. Ana Costa", "987.654.321-00", "22/08/1980", "98888-7777", "CRM-SC 12345", "Cardiologia");
    
    // 2. Paciente e seu convênio
    Paciente paciente1("Joana Lima", "111.222.333-44", "15/03/1990", "97777-6666", "Unimed");
    secretaria1.cadastrarPaciente(paciente1);
    
    // 3. Agendamento da consulta
    Consulta consulta1("13/06/2025", "10:30", 250.00, &medico1, &paciente1);
    secretaria1.agendarConsulta(agendaDaClinica, consulta1);

    // 4. Criação e envio do lembrete para a consulta
    std::cout << "\nProcessando lembrete da consulta..." << std::endl;
    Lembrete lembrete1(&consulta1);
    lembrete1.enviarLembrete(paciente1.getTelefone()); // Usando o telefone do paciente
    
    std::cout << "\n--- Testes concluidos! ---" << std::endl;
    
    return 0;
}