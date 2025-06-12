// include/Medico.h

#ifndef MEDICO_H
#define MEDICO_H

#include "Pessoa.h" // Inclui a classe base
#include <string>

// --- Declaração Antecipada (Forward Declaration) ---
// Dizemos ao compilador que essas classes existem, sem precisar incluir os .h delas aqui.
// Isso evita erros de dependência circular.
class Consulta;
class Paciente;

/**
 * @class Medico
 * @brief Representa um médico no sistema, herdando de Pessoa.
 *
 * Contém informações específicas do médico, como CRM e especialidade,
 * e métodos para gerenciar consultas, emitir atestados e solicitar exames.
 */
class Medico : public Pessoa { // "public Pessoa" indica herança pública
private:
    std::string crm;
    std::string especialidade;

public:
    /**
     * @brief Construtor da classe Medico.
     */
    Medico(const std::string& cpf, const std::string& nome, const std::string& dataNascimento, const std::string& telefone, const std::string& crm, const std::string& especialidade);

    /**
     * @brief Destrutor da classe Medico.
     */
    ~Medico();

    // --- Métodos de Operação (conforme o diagrama) ---

    void agendarConsulta(Consulta& consulta);
    void cancelarConsulta(Consulta& consulta);
    void emitirAtestado(const Paciente& paciente, const std::string& observacoes);
    void solicitarExame(const Paciente& paciente, const std::string& nomeExame);
};

#endif // MEDICO_H