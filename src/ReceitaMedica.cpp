#include "ReceitaMedica.h"
#include "Medico.h"
#include "Paciente.h"
#include <iostream>

ReceitaMedica::ReceitaMedica(Medico* medico, Paciente* paciente, const std::string& dataEmissao)
    : medico(medico), paciente(paciente), dataEmissao(dataEmissao) {}

ReceitaMedica::~ReceitaMedica() {}

void ReceitaMedica::adicionarMedicamento(const Medicamento& medicamento) {
    this->medicamentos.push_back(medicamento);
}

void ReceitaMedica::imprimirReceita() const {
    std::cout << "\n--- RECEITA MEDICA ---" << std::endl;
    std::cout << "Data de Emissao: " << this->dataEmissao << std::endl;
    std::cout << "Paciente: " << this->paciente->getNome() << std::endl;
    std::cout << "Medico: Dr(a). " << this->medico->getNome() << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Medicamentos Prescritos:" << std::endl;

    for (const auto& med : this->medicamentos) {
        std::cout << " - " << med.getNome() << " (" << med.getDosagem() << ")" << std::endl;
        std::cout << "   Instrucoes: " << med.getInstrucoes() << std::endl;
    }
    
    std::cout << "----------------------\n" << std::endl;
}

bool ReceitaMedica::validarReceita() const {
    return !dataEmissao.empty() && medico != nullptr && !medicamentos.empty();
}

void ReceitaMedica::notificarPaciente() {
    std::cout << "-> Notificacao enviada para " << this->paciente->getNome() 
              << " sobre a nova receita de " << this->dataEmissao << "." << std::endl;
}