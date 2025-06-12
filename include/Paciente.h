// include/Paciente.h

#ifndef PACIENTE_H
#define PACIENTE_H

#include "Pessoa.h"
#include <string>

class Consulta;

/**
 * @class Paciente
 * @brief Representa um paciente no sistema, herdando de Pessoa.
 */
class Paciente : public Pessoa {
private:
    std::string planoSaude;

public:
    Paciente(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& planoSaude);
    ~Paciente();

    // --- Métodos de Operação (conforme o diagrama) ---
    void agendarConsulta(Consulta& consulta);
    void cancelarConsulta(Consulta& consulta);
    void visualizarProntuario() const;
    void visualizarReceitas() const;
    void visualizarExames() const;
};

#endif // PACIENTE_H