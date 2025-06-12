#ifndef LEMBRETE_H
#define LEMBRETE_H

#include <string>

class Consulta;

class Lembrete {
private:
    std::string mensagem;
    Consulta* consulta;

public:
    Lembrete(Consulta* consulta);
    ~Lembrete();

    void formatarMensagem();
    void enviarLembrete(const std::string& contato);
    void agendarEnvioLembrete(const std::string& data, const std::string& hora);
};

#endif