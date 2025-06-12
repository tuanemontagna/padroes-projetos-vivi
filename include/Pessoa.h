// include/Pessoa.h

#ifndef PESSOA_H
#define PESSOA_H

#include <string>

/**
 * @class Pessoa
 * @brief Classe base que representa uma pessoa no sistema da clínica.
 */
class Pessoa {
protected:
    std::string cpf;
    std::string nome;
    std::string dataNascimento;
    std::string telefone;

public:
    Pessoa(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone);
    virtual ~Pessoa();

    // Métodos para obter os dados (getters)
    std::string getNome() const;
    std::string getCpf() const;
    std::string getTelefone() const;
};

#endif // PESSOA_H