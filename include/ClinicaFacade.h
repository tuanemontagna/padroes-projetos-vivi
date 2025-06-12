#ifndef CLINICAFACADE_H
#define CLINICAFACADE_H
#include <string>
#include <map>

class IPessoaFactory;
class Agenda;

class ClinicaFacade {
private:
    IPessoaFactory* medicoFactory;
    IPessoaFactory* pacienteFactory;
    Agenda* agenda;

public:
    ClinicaFacade();
    ~ClinicaFacade();

    void agendarConsultaCompleta(
        const std::map<std::string, std::string>& dadosPaciente,
        const std::map<std::string, std::string>& dadosMedico,
        const std::string& dataConsulta,
        const std::string& horaConsulta
    );
    void listarConsultas() const;
};

#endif 