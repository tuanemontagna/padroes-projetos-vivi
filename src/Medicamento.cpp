// src/Medicamento.cpp

#include "Medicamento.h"

Medicamento::Medicamento(const std::string& nome, const std::string& dosagem, const std::string& instrucoes)
    : nome(nome), dosagem(dosagem), instrucoes(instrucoes) {}

Medicamento::~Medicamento() {}

std::string Medicamento::getNome() const {
    return this->nome;
}

std::string Medicamento::getDosagem() const {
    return this->dosagem;
}

std::string Medicamento::getInstrucoes() const {
    return this->instrucoes;
}