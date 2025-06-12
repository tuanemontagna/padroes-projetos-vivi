// include/Medicamento.h

#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <string>

/**
 * @class Medicamento
 * @brief Representa um medicamento que pode ser prescrito em uma receita.
 */
class Medicamento {
private:
    std::string nome;
    std::string dosagem;     // Ex: "500mg", "20ml"
    std::string instrucoes;  // Ex: "Tomar 1 comprimido a cada 8 horas por 7 dias"

public:
    Medicamento(const std::string& nome, const std::string& dosagem, const std::string& instrucoes);
    ~Medicamento();

    // Métodos para obter os dados (getters), úteis para a impressão da receita
    std::string getNome() const;
    std::string getDosagem() const;
    std::string getInstrucoes() const;
};

#endif // MEDICAMENTO_H