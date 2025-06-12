#ifndef SECRETARIA_H
#define SECRETARIA_H

#include <string>

class Agenda;
class Consulta;
class Paciente;
class Convenio;

class Secretaria {
private:
    std::string nome;
    std::string matricula_id;

public:
    Secretaria(const std::string& nome, const std::string& matricula_id);
    ~Secretaria();

    void agendarConsulta(Agenda& agenda, const Consulta& consulta);
    void cancelarConsulta(Agenda& agenda, const Consulta& consulta);
    void cadastrarPaciente(Paciente& paciente);
    void receberPagamento(Convenio& convenio, Paciente& paciente, double valor);
};

#endif 