// main.cpp (VERSÃO FINAL PARA APRESENTAÇÃO)

#include <iostream>
#include <map>
#include "ClinicaFacade.h" // A única inclusão de sistema que precisamos!

int main() {
    std::cout << "===============================================" << std::endl;
    std::cout << "      SISTEMA DE GESTÃO DA CLÍNICA INICIADO" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Data: 12 de Junho de 2025." << std::endl;

    // 1. O sistema inteiro é inicializado com a criação da Facade.
    ClinicaFacade clinica;

    // 2. Definimos os dados COMPLETOS para nossos atores
    // --- Paciente 1 ---
    std::map<std::string, std::string> dadosPaciente1;
    dadosPaciente1["cpf"] = "111.222.333-44";
    dadosPaciente1["nome"] = "Joana Lima";
    dadosPaciente1["dataNascimento"] = "15/03/1990";
    dadosPaciente1["telefone"] = "97777-6666";
    dadosPaciente1["planoSaude"] = "Unimed";

    // --- Paciente 2 ---
    std::map<std::string, std::string> dadosPaciente2;
    dadosPaciente2["cpf"] = "444.555.666-77";
    dadosPaciente2["nome"] = "Carlos Souza";
    dadosPaciente2["dataNascimento"] = "20/08/1988";
    dadosPaciente2["telefone"] = "95555-4444";
    dadosPaciente2["planoSaude"] = "Bradesco Saude";
    
    // --- Medico 1 ---
    std::map<std::string, std::string> dadosMedico1;
    dadosMedico1["cpf"] = "987.654.321-00";
    dadosMedico1["nome"] = "Dra. Ana Costa";
    dadosMedico1["dataNascimento"] = "22/08/1980";
    dadosMedico1["telefone"] = "98888-7777";
    dadosMedico1["crm"] = "CRM-SC 12345";
    dadosMedico1["especialidade"] = "Cardiologia";

    // --- Medico 2 ---
    std::map<std::string, std::string> dadosMedico2;
    dadosMedico2["cpf"] = "654.321.987-00";
    dadosMedico2["nome"] = "Dr. Pedro Alves";
    dadosMedico2["dataNascimento"] = "10/11/1975";
    dadosMedico2["telefone"] = "94444-3333";
    dadosMedico2["crm"] = "CRM-SC 54321";
    dadosMedico2["especialidade"] = "Ortopedia";

    std::cout << "\n>>> Realizando operacoes do dia..." << std::endl;

    clinica.agendarConsultaCompleta(dadosPaciente1, dadosMedico1, "13/06/2025", "10:00");

    clinica.agendarConsultaCompleta(dadosPaciente2, dadosMedico2, "13/06/2025", "11:00");

    clinica.agendarConsultaCompleta(dadosPaciente1, dadosMedico2, "13/06/2025", "10:00");

    std::cout << "\n>>> Solicitando relatorio de agendamentos..." << std::endl;
    clinica.listarConsultas();

    std::cout << "\n--- O DIA DE TRABALHO TERMINOU ---" << std::endl;

    return 0;
}