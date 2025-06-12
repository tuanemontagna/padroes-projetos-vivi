#ifndef PRONTUARIO_H
#define PRONTUARIO_H

#include <string>
#include <vector>

class Paciente;
class ReceitaMedica;

class Prontuario {
private:
    std::string historico;
    std::string doencas;
    std::string alergias;
    Paciente* paciente;
    std::vector<ReceitaMedica*> receitas;

public:
    Prontuario(Paciente* paciente);
    ~Prontuario();

    void atualizarHistorico(const std::string& novaEntrada);
    void adicionarDoenca(const std::string& doenca);
    void adicionarAlergia(const std::string& alergia);
    void adicionarReceita(ReceitaMedica* receita);
    void imprimirProntuario() const;
};

#endif