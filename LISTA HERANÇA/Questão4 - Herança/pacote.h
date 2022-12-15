#pragma once
#include <iostream>

using namespace std;

class Pacote {
    private:
        string nomeDestinatario;
        string enderecoDestinatario;
        string cidadeDestinatario;
        string estadoDestinatario;
        string cepDestinatario;
        string nomeRemetente;
        string enderecoRemetente;
        string cidadeRemetente;
        string estadoRemetente;
        string cepRemetente;
        float peso, precoKG;

    public:
        Pacote(string, string, string, string, string, string, string, string, string, string, float, float);
        Pacote();

        double calculaCusto();

        void setNomeDestinatario(string nomeDestinatario);
        void setEnderecoDestinatario(string enderecoDestinatario);
        void setCidadeDestinatario(string cidadeDestinatario);
        void setEstadoDestinatario(string estadoDestinatario);
        void setCepDestinatario(string cepDestinatario);
        void setNomeRemetente(string nomeRemetente);
        void setEnderecoRemetente(string enderecoRemetente);
        void setCidadeRemetente(string cidadeRemetente);
        void setEstadoRemetente(string estadoRemetente);
        void setCepRemetente(string cepRemetente);
        void setPeso(float peso);
        void setprecoKG(float precoKG);

        float getPeso();


};