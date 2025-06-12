
#ifndef RECEITAMEDICA_H
#define RECEITAMEDICA_H

#include <string>
#include <vector>
#include "Medicamento.h"

class Medico;
class Paciente;

class ReceitaMedica {
private:
    std::string orientacoes;
    std::string dataEmissao;
    Medico* medico;
    Paciente* paciente;
    std::vector<Medicamento> medicamentos;

public:
    ReceitaMedica(Medico* medico, Paciente* paciente, const std::string& dataEmissao);
    ~ReceitaMedica();

    void adicionarMedicamento(const Medicamento& medicamento);
    void imprimirReceita() const;
    bool validarReceita() const;
    void notificarPaciente();
};

#endif 