#include "ClinicaFacade.h"
#include "MedicoFactory.h"
#include "PacienteFactory.h"
#include "Agenda.h"
#include "Medico.h"
#include "Paciente.h"
#include "Consulta.h"
#include <iostream>

ClinicaFacade::ClinicaFacade() {
    std::cout << "[Facade] Inicializando subsistemas da clinica..." << std::endl;
    this->medicoFactory = new MedicoFactory();
    this->pacienteFactory = new PacienteFactory();
    this->agenda = new Agenda();
}

ClinicaFacade::~ClinicaFacade() {
    std::cout << "[Facade] Desligando subsistemas e limpando memoria..." << std::endl;
    delete this->medicoFactory;
    delete this->pacienteFactory;
    delete this->agenda;
}

void ClinicaFacade::agendarConsultaCompleta(
    const std::map<std::string, std::string>& dadosPaciente,
    const std::map<std::string, std::string>& dadosMedico,
    const std::string& dataConsulta,
    const std::string& horaConsulta)
{
    std::cout << "\n[Facade] Iniciando fluxo de agendamento de consulta..." << std::endl;

    Pessoa* pMedico = this->medicoFactory->createPessoa(dadosMedico);
    Pessoa* pPaciente = this->pacienteFactory->createPessoa(dadosPaciente);

    Medico* medico = dynamic_cast<Medico*>(pMedico);
    Paciente* paciente = dynamic_cast<Paciente*>(pPaciente);

    if (medico && paciente) {
        std::cout << "[Facade] Medico e Paciente criados com sucesso." << std::endl;

        if (this->agenda->verificarDisponibilidade(dataConsulta, horaConsulta)) {
            std::cout << "[Facade] Horario disponivel." << std::endl;
            Consulta novaConsulta(dataConsulta, horaConsulta, 350.0, medico, paciente);
            this->agenda->adicionarConsulta(novaConsulta);
        } else {
            std::cout << "[Facade] Horario indisponivel." << std::endl;
        }
    } else {
        std::cout << "[Facade] Erro ao criar Medico ou Paciente." << std::endl;
    }

    delete medico;
    delete paciente;
}

void ClinicaFacade::listarConsultas() const {
    this->agenda->imprimirAgenda();
}