// include/Agenda.h

#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <string>
#include "Consulta.h" // A Agenda contém uma lista de Consultas

/**
 * @class Agenda
 * @brief Gerencia a coleção de todas as consultas da clínica.
 *
 * Permite adicionar, remover e verificar a disponibilidade de horários.
 */
class Agenda {
private:
    std::vector<Consulta> consultas;

public:
    Agenda();
    ~Agenda();

    /**
     * @brief Adiciona uma nova consulta à agenda.
     * @param consulta O objeto Consulta a ser adicionado.
     */
    void adicionarConsulta(const Consulta& consulta);

    /**
     * @brief Remove uma consulta da agenda.
     * @param consulta A consulta a ser removida.
     * @note Em um sistema real, a remoção seria por um ID único.
     */
    void removerConsulta(const Consulta& consulta);

    /**
     * @brief Verifica se um determinado horário está livre.
     * @param data A data a ser verificada.
     * @param hora A hora a ser verificada.
     * @return true se o horário estiver disponível, false caso contrário.
     */
    bool verificarDisponibilidade(const std::string& data, const std::string& hora) const;
};

#endif // AGENDA_H