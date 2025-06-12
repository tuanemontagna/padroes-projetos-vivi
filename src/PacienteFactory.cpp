#include "PacienteFactory.h"
#include "Paciente.h"
#include <stdexcept>

Pessoa* PacienteFactory::createPessoa(const std::map<std::string, std::string>& data) {
    try {
        std::string cpf = data.at("cpf");
        std::string nome = data.at("nome");
        std::string dataNascimento = data.at("dataNascimento");
        std::string telefone = data.at("telefone");
        std::string planoSaude = data.at("planoSaude");

        return new Paciente(cpf, nome, dataNascimento, telefone, planoSaude);
    } catch (const std::out_of_range& e) {
        return nullptr;
    }
}