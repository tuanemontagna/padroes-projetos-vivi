#ifndef SECRETARIAFACTORY_H
#define SECRETARIAFACTORY_H

#include "IPessoaFactory.h"

class Secretaria;

class SecretariaFactory : public IPessoaFactory {
public:
    Pessoa* createPessoa(const std::map<std::string, std::string>& data) override;
    Secretaria* createSecretaria(const std::string& nome, const std::string& matricula_id);
};

#endif 