// include/Prontuario.h

#ifndef PRONTUARIO_H
#define PRONTUARIO_H

#include <string>
#include <vector>

// Declarações antecipadas
class Paciente;
class ReceitaMedica;

/**
 * @class Prontuario
 * @brief Armazena o histórico médico completo de um paciente.
 */
class Prontuario {
private:
    std::string historico;
    std::string doencas;
    std::string alergias;
    Paciente* paciente; // Ponteiro para o paciente dono deste prontuário
    std::vector<ReceitaMedica*> receitas; // Lista de ponteiros para as receitas do paciente

public:
    /**
     * @brief Construtor de Prontuario. Um prontuário é sempre criado para um paciente específico.
     * @param paciente Ponteiro para o paciente.
     */
    Prontuario(Paciente* paciente);
    ~Prontuario();

    // Métodos para gerenciar o prontuário
    void atualizarHistorico(const std::string& novaEntrada);
    void adicionarDoenca(const std::string& doenca);
    void adicionarAlergia(const std::string& alergia);
    void adicionarReceita(ReceitaMedica* receita);

    // Método para exibir as informações
    void imprimirProntuario() const;
};

#endif // PRONTUARIO_H