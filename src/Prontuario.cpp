// src/Prontuario.cpp

#include "Prontuario.h"
#include "Paciente.h"
#include "ReceitaMedica.h"
#include <iostream>
#include <string> // Para usar std::to_string

Prontuario::Prontuario(Paciente* paciente) : paciente(paciente) {
    this->historico = "Prontuario criado em " + std::to_string(2025) + ".\n"; // Usando 2025 como exemplo
}

Prontuario::~Prontuario() {}

void Prontuario::atualizarHistorico(const std::string& novaEntrada) {
    this->historico += novaEntrada + "\n";
}

void Prontuario::adicionarDoenca(const std::string& doenca) {
    this->doencas += doenca + "; ";
}

void Prontuario::adicionarAlergia(const std::string& alergia) {
    this->alergias += alergia + "; ";
}

void Prontuario::adicionarReceita(ReceitaMedica* receita) {
    this->receitas.push_back(receita);
}

void Prontuario::imprimirProntuario() const {
    std::cout << "\n--- PRONTUARIO MEDICO ---" << std::endl;
    std::cout << "Paciente: " << this->paciente->getNome() << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Historico:\n" << this->historico << std::endl;
    std::cout << "Doencas Registradas: " << this->doencas << std::endl;
    std::cout << "Alergias Registradas: " << this->alergias << std::endl;
    std::cout << "Numero de Receitas: " << this->receitas.size() << std::endl;
    std::cout << "-------------------------\n" << std::endl;
}