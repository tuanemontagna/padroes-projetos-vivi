#ifndef MEDICO_H
#define MEDICO_H

#include "Pessoa.h"
#include <string>

class Consulta;
class Paciente;

class Medico : public Pessoa {
private:
    std::string crm;
    std::string especialidade;

public:
    Medico(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& crm, const std::string& especialidade);
    ~Medico();

    void agendarConsulta(Consulta& consulta);
    void cancelarConsulta(Consulta& consulta);
    void emitirAtestado(const Paciente& paciente, const std::string& observacoes);
    void solicitarExame(const Paciente& paciente, const std::string& nomeExame);
};

#endif 