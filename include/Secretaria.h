// include/Secretaria.h

#ifndef SECRETARIA_H
#define SECRETARIA_H

#include <string>

// Declarações antecipadas das classes com as quais a Secretaria interage
class Agenda;
class Consulta;
class Paciente;
class Convenio;

/**
 * @class Secretaria
 * @brief Representa um(a) funcionário(a) da secretaria, responsável por operações administrativas.
 */
class Secretaria {
private:
    std::string nome;
    std::string matricula_id;

public:
    Secretaria(const std::string& nome, const std::string& matricula_id);
    ~Secretaria();

    // Métodos de operação que utilizam outras classes
    void agendarConsulta(Agenda& agenda, const Consulta& consulta);
    void cancelarConsulta(Agenda& agenda, const Consulta& consulta);
    void cadastrarPaciente(Paciente& paciente);
    void receberPagamento(Convenio& convenio, Paciente& paciente, double valor);
};

#endif // SECRETARIA_H