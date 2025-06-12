// src/Convenio.cpp

#include "Convenio.h"
#include "Consulta.h"
#include "Paciente.h"
#include <iostream>
#include <random> // Para gerar um número de guia "aleatório"

Convenio::Convenio(const std::string& nome) : nome(nome), status("Nenhuma Guia Ativa") {}

Convenio::~Convenio() {}

std::string Convenio::gerarGuia(const Consulta& consulta) {
    // Simula a geração de um número de guia aleatório
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(100000, 999999);
    
    this->guia = std::to_string(distrib(gen));
    this->status = "Pendente de Aprovacao";
    std::cout << "-> [" << this->nome << "] Guia " << this->guia << " gerada para a consulta." << std::endl;
    return this->guia;
}

bool Convenio::verificarElegibilidade(const Paciente& paciente) const {
    // Em um sistema real, isso consultaria um banco de dados ou uma API.
    std::cout << "-> [" << this->nome << "] Verificando elegibilidade para " << paciente.getNome() << "... Elegivel!" << std::endl;
    return true;
}

void Convenio::aprovarGuia(const std::string& guia) {
    if (this->guia == guia) {
        this->status = "Aprovado";
        std::cout << "-> [" << this->nome << "] Guia " << guia << " foi APROVADA." << std::endl;
    } else {
        std::cout << "-> [" << this->nome << "] Guia " << guia << " invalida." << std::endl;
    }
}

bool Convenio::processarPagamento(double valor) {
    if (this->status == "Aprovado") {
        std::cout << "-> [" << this->nome << "] Processando pagamento de R$" << valor << "... Pagamento realizado com sucesso." << std::endl;
        return true;
    } else {
        std::cout << "-> [" << this->nome << "] Falha no pagamento: Guia nao esta aprovada." << std::endl;
        return false;
    }
}