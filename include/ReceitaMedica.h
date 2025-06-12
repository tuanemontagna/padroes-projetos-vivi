// include/ReceitaMedica.h

#ifndef RECEITAMEDICA_H
#define RECEITAMEDICA_H

#include <string>
#include <vector>     // Para usar o container std::vector
#include "Medicamento.h" // Precisamos da definição completa de Medicamento

class Medico;
class Paciente;

/**
 * @class ReceitaMedica
 * @brief Representa uma receita emitida por um médico para um paciente.
 * Contém uma lista de medicamentos e orientações.
 */
class ReceitaMedica {
private:
    std::string orientacoes;
    std::string dataEmissao;
    Medico* medico;
    Paciente* paciente;
    std::vector<Medicamento> medicamentos; // Uma lista de objetos Medicamento

public:
    ReceitaMedica(Medico* medico, Paciente* paciente, const std::string& dataEmissao);
    ~ReceitaMedica();

    void adicionarMedicamento(const Medicamento& medicamento);
    void imprimirReceita() const;
    bool validarReceita() const;
    void notificarPaciente();
};

#endif // RECEITAMEDICA_H