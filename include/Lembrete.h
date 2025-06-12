// include/Lembrete.h

#ifndef LEMBRETE_H
#define LEMBRETE_H

#include <string>

class Consulta; // Declaração antecipada

/**
 * @class Lembrete
 * @brief Representa um lembrete de consulta a ser enviado.
 */
class Lembrete {
private:
    std::string mensagem;
    Consulta* consulta; // O lembrete é sempre sobre uma consulta

public:
    /**
     * @brief Construtor de Lembrete.
     * @param consulta Ponteiro para a consulta a ser lembrada.
     */
    Lembrete(Consulta* consulta);
    ~Lembrete();

    void formatarMensagem();
    void enviarLembrete(const std::string& contato); // Ex: telefone ou email
    void agendarEnvioLembrete(const std::string& data, const std::string& hora);
};

#endif // LEMBRETE_H