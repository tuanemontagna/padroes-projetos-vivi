#ifndef IPESSOAFACTORY_H
#define IPESSOAFACTORY_H

#include <string>
#include <map>

class Pessoa;

class IPessoaFactory {
public:
    virtual ~IPessoaFactory() {}
    virtual Pessoa* createPessoa(const std::map<std::string, std::string>& data) = 0;
};

#endif 