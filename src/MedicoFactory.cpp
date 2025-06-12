#include "MedicoFactory.h"
#include "Medico.h"
#include <stdexcept>

Pessoa* MedicoFactory::createPessoa(const std::map<std::string, std::string>& data) {
    try {
        std::string cpf = data.at("cpf");
        std::string nome = data.at("nome");
        std::string dataNascimento = data.at("dataNascimento");
        std::string telefone = data.at("telefone");
        std::string crm = data.at("crm");
        std::string especialidade = data.at("especialidade");

        return new Medico(cpf, nome, dataNascimento, telefone, crm, especialidade);
    } catch (const std::out_of_range& e) {
        return nullptr;
    }
}