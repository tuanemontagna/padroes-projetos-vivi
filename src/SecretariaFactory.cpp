#include "SecretariaFactory.h"
#include "Secretaria.h"
#include <iostream>

Pessoa* SecretariaFactory::createPessoa(const std::map<std::string, std::string>& data) {
    std::cerr << "AVISO: SecretariaFactory nao pode criar objetos do tipo Pessoa." << std::endl;
    return nullptr;
}

Secretaria* SecretariaFactory::createSecretaria(const std::string& nome, const std::string& matricula_id) {
    return new Secretaria(nome, matricula_id);
}