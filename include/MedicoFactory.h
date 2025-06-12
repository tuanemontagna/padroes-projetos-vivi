#ifndef MEDICOFACTORY_H
#define MEDICOFACTORY_H

#include "IPessoaFactory.h"

class MedicoFactory : public IPessoaFactory {
public:
    Pessoa* createPessoa(const std::map<std::string, std::string>& data) override;
};

#endif 