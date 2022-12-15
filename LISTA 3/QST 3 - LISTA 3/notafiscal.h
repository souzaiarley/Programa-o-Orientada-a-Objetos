#include <iostream>

using namespace std;

class NotaFiscal {
    private:
        string numero_peca, descricao;
        int quantidade;
        double preco;

    public:
        void setNumero_Peca(string numero_peca);
        void setDescricao(string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);

        string getNumero_Peca();
        string getDescricao();
        int getQuantidade();
        double getPreco();

        double getTotalNota(NotaFiscal v[], int tamanho);
        double getTotalProduto();

};