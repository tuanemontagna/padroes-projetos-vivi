
#ifndef CONSULTA_H
#define CONSULTA_H

#include <string>

class Medico;
class Paciente;

class Consulta {
private:
    std::string data;
    std::string hora;
    std::string status;
    double valor;
    std::string formaPagamento;
    Medico* medico;
    Paciente* paciente;

public:
    Consulta(const std::string& data, const std::string& hora, double valor, Medico* medico, Paciente* paciente);
    ~Consulta();

    void agendar();
    void cancelar();
    void realizarCobranca(const std::string& formaPagamento);
    void emitirReceita();
    void emitirLaudo();

    std::string getData() const;
    std::string getHora() const;
    Paciente* getPaciente() const;
    double getValor() const;
    Medico* getMedico() const;
};

#endif 