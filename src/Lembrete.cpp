// src/Lembrete.cpp

#include "Lembrete.h"
#include "Consulta.h" // Incluímos para aceder aos detalhes da consulta
#include "Medico.h"   // Para obter o nome do médico
#include "Paciente.h" // Para obter o nome do paciente
#include <iostream>

Lembrete::Lembrete(Consulta* consulta) : consulta(consulta) {
    // Ao criar um lembrete, já formatamos a mensagem padrão.
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