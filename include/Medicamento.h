#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <string>

class Medicamento {
private:
    std::string nome;
    std::string dosagem;
    std::string instrucoes;

public:
    Medicamento(const std::string& nome, const std::string& dosagem, const std::string& instrucoes);
    ~Medicamento();

    std::string getNome() const;
    std::string getDosagem() const;
    std::string getInstrucoes() const;
};

#endif 