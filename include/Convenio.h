// include/Convenio.h

#ifndef CONVENIO_H
#define CONVENIO_H

#include <string>

class Consulta;
class Paciente;

/**
 * @class Convenio
 * @brief Gerencia a comunicação com um convênio de saúde.
 *
 * Responsável por gerar guias de autorização, verificar elegibilidade
 * e processar pagamentos.
 */
class Convenio {
private:
    std::string nome;   // Ex: "Unimed", "SulAmerica"
    std::string guia;   // Número da guia de autorização
    std::string status; // Ex: "Pendente", "Aprovado", "Negado"

public:
    Convenio(const std::string& nome);
    ~Convenio();

    std::string gerarGuia(const Consulta& consulta);
    bool verificarElegibilidade(const Paciente& paciente) const;
    void aprovarGuia(const std::string& guia);
    bool processarPagamento(double valor);
};

#endif // CONVENIO_H