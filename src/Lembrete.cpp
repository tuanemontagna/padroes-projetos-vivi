#include "Lembrete.h"
#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"
#include <iostream>

Lembrete::Lembrete(Consulta* consulta) : consulta(consulta) {
    this->formatarMensagem();
}

Lembrete::~Lembrete() {}

void Lembrete::formatarMensagem() {
    if (this->consulta != nullptr) {
        this->mensagem = "LEMBRETE: Ola " + this->consulta->getPaciente()->getNome() +
                         ", sua consulta com Dr(a). " + this->consulta->getMedico()->getNome() +
                         " esta marcada para o dia " + this->consulta->getData() +
                         " as " + this->consulta->getHora() + ".";
    } else {
        this->mensagem = "Erro: Lembrete criado para uma consulta invalida.";
    }
}

void Lembrete::enviarLembrete(const std::string& contato) {
    std::cout << "-> [Lembrete] Enviando para " << contato << ": \"" << this->mensagem << "\"" << std::endl;
}

void Lembrete::agendarEnvioLembrete(const std::string& data, const std::string& hora) {
    std::cout << "-> [Lembrete] Envio agendado para " << data << " as " << hora << "." << std::endl;
}