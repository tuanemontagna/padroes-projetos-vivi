#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <string>
#include "Consulta.h"

class Agenda {
private:
    std::vector<Consulta> consultas;

public:
    Agenda();
    ~Agenda();

    void adicionarConsulta(const Consulta& consulta);
    void removerConsulta(const Consulta& consulta);
    bool verificarDisponibilidade(const std::string& data, const std::string& hora) const;
    void imprimirAgenda() const;
};

#endif 