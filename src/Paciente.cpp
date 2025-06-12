#include "Paciente.h"
#include <iostream>

Paciente::Paciente(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& planoSaude)
    : Pessoa(cpf, nome, dataNascimento, telefone), planoSaude(planoSaude) {
}

Paciente::~Paciente() {
}

void Paciente::agendarConsulta(Consulta& consulta) {
    std::cout << "Paciente " << this->nome << " chamou o metodo 'agendarConsulta'." << std::endl;
}

void Paciente::cancelarConsulta(Consulta& consulta) {
    std::cout << "Paciente " << this->nome << " chamou o metodo 'cancelarConsulta'." << std::endl;
}

void Paciente::visualizarProntuario() const {
    std::cout << "Paciente " << this->nome << " esta visualizando seu prontuario." << std::endl;
}

void Paciente::visualizarReceitas() const {
    std::cout << "Paciente " << this->nome << " esta visualizando suas receitas." << std::endl;
}

void Paciente::visualizarExames() const {
    std::cout << "Paciente " << this->nome << " esta visualizando seus exames." << std::endl;
}