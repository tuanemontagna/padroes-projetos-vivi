#ifndef PACIENTEFACTORY_H
#define PACIENTEFACTORY_H

#include "IPessoaFactory.h"

class PacienteFactory : public IPessoaFactory {
public:
    Pessoa* createPessoa(const std::map<std::string, std::string>& data) override;
};

#endif