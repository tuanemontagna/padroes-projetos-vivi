// src/Pessoa.cpp

#include "Pessoa.h"

Pessoa::Pessoa(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone)
    : cpf(cpf), nome(nome), dataNascimento(dataNascimento), telefone(telefone) {
}

Pessoa::~Pessoa() {
}

std::string Pessoa::getNome() const {
    return this->nome;
}

std::string Pessoa::getCpf() const {
    return this->cpf;
}

std::string Pessoa::getTelefone() const {
    return this->telefone;
}