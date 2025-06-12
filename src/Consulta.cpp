
#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"
#include <iostream>

Consulta::Consulta(const std::string& data, const std::string& hora, double valor, Medico* medico, Paciente* paciente)
    : data(data), hora(hora), status("Agendada"), valor(valor), formaPagamento("Aguardando"), medico(medico), paciente(paciente) {
}

Consulta::~Consulta() {
}

void Consulta::agendar() {
    this->status = "Agendada";
    std::cout << "-> Consulta agendada com sucesso para " << this->paciente->getNome() 
              << " com o(a) Dr(a). " << this->medico->getNome() 
              << " no dia " << this->data << " as " << this->hora << "." << std::endl;
}

void Consulta::cancelar() {
    this->status = "Cancelada";
    std::cout << "-> Consulta do paciente " << this->paciente->getNome() << " foi cancelada." << std::endl;
}

void Consulta::realizarCobranca(const std::string& formaPagamento) {
    this->formaPagamento = formaPagamento;
    this->status = "Realizada e Paga";
    std::cout << "-> Cobranca no valor de R$" << this->valor 
              << " realizada via " << this->formaPagamento << "." << std::endl;
}

void Consulta::emitirReceita() {
    std::cout << "-> Emitindo receita para a consulta do paciente " << this->paciente->getNome() << "." << std::endl;
}

void Consulta::emitirLaudo() {
    std::cout << "-> Emitindo laudo para a consulta do paciente " << this->paciente->getNome() << "." << std::endl;
}

std::string Consulta::getData() const { 
    return this->data; 
}

std::string Consulta::getHora() const { 
    return this->hora; 
}

Paciente* Consulta::getPaciente() const { 
    return this->paciente; 
}

double Consulta::getValor() const { 
    return this->valor; 
}

Medico* Consulta::getMedico() const { 
    return this->medico; 
}