#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
protected:
    std::string cpf;
    std::string nome;
    std::string dataNascimento;
    std::string telefone;

public:
    Pessoa(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone);
    virtual ~Pessoa();

    std::string getNome() const;
    std::string getCpf() const;
    std::string getTelefone() const;
};

#endif