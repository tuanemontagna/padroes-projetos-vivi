#ifndef CONVENIO_H
#define CONVENIO_H

#include <string>

class Consulta;
class Paciente;

class Convenio {
private:
    std::string nome;
    std::string guia;
    std::string status;

public:
    Convenio(const std::string& nome);
    ~Convenio();

    std::string gerarGuia(const Consulta& consulta);
    bool verificarElegibilidade(const Paciente& paciente) const;
    void aprovarGuia(const std::string& guia);
    bool processarPagamento(double valor);
};

#endif 