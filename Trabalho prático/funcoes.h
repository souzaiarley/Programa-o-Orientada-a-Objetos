#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "Cd.h"
#include "Dvd.h"


bool findTitulo(string artista, string titulo, vector<CD> cds); // Verifica a existencia de um titulo de autoria "artista"
bool findTitulo(string artista, string titulo, vector<DVD> dvds); // Verifica a existencia de um titulo de autoria "artista"
bool findArtista(string artista, vector<CD> cds); // Verifica a existencia de um artista na colecao de CDs
bool findArtista(string artista, vector<DVD> dvds); // Verifica a existencia de um artista na colecao de DVDs
void itemA(string artista, vector<CD> cds); // Exibe o nome de todos os CDs de um artista, ordenados pela data de lançamento
void itemB(string artista, vector<DVD> dvds); // Exibe o nome de todos os DVDs de um artista, ordenados pela data de lançamento
void itemC(string artista, vector<CD> cds, vector<DVD> dvds); // Exibe o nome de todos os titulos do artista, ordenados pela data de lançamento
void itemD(int ano, vector<CD> cds, vector<DVD> dvds); // Exibe todas as midias lançadas em um ano, em ordem alfabetica
void itemE(CD cd, DVD dvd); // Exibe as faixas em comum que o CD e o DVD possuem, bem como suas exclusivas
void itemF(string genero, vector<CD> cds); // Exibe os cds do genero "genero"
void itemF(string genero, vector<DVD> dvds); // Exibe os dvds do genero "genero"
void itemG(vector<CD> cds, vector<DVD> dvds); // Exibe todas as keywords existentes
void print(vector<CD> cds, vector<DVD> dvds); // Exibe todas as midias
void printCD(vector<CD> cds); // Exibe a colecao de CDs
void printDVD(vector<DVD> dvds); // Exibe a colecao de DVDs
CD editCD(CD cd); // Funcao de editar CDs
DVD editDVD(DVD dvd); // Funcao de editar DVDs


bool findArtista(string artista, vector<CD> cds){
    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getArtista() == artista){
            return true;
        }
    }
    return false;
}

bool findArtista(string artista, vector<DVD> dvds){
    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getArtista() == artista){
            return true;
        }
    }
    return false;
}

bool findTitulo(string artista, string titulo, vector<CD> cds){
    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getArtista() == artista && cds[i].getTitulo() == titulo){
            return true;
        }
    }
    return false;
}

bool findTitulo(string artista, string titulo, vector<DVD> dvds){
    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getArtista() == artista && dvds[i].getTitulo() == titulo){
            return true;
        }
    }
    return false;
}

void itemA(string artista, vector<CD> cds){
    vector<CD> cds_artista;
    CD aux;

    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getArtista() == artista){ 
            cds_artista.push_back(cds[i]); // Forma um vector contendo apenas os CDs de "artista"
        }
    }

    for (int j = 0; j < cds_artista.size(); j++){  // Nesse laço ocorre a ordenacao dos CDs  por ano de lançamento
        for (int i = 0; i < cds_artista.size()-1; i++){
            if (cds_artista[i].getLancamento() >= cds_artista[i+1].getLancamento()){
                aux = cds_artista[i];
                cds_artista[i] = cds_artista[i+1];
                cds_artista[i+1] = aux;
            }
        }
    }
    cout << "=======================\n";
    cout << "Exibindo CDs de " << artista << ":\n";
    for (int i = 0; i < cds_artista.size(); i++){ // Exibe os CDs na ordem de lançamento
        cout << "CD " << i+1 <<": " << cds_artista[i].getTitulo() << "(" << cds_artista[i].getLancamento() << ")" << endl;
    }
}

void itemB(string artista, vector<DVD> dvds){
    vector<DVD> dvds_artista;
    DVD aux;

    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getArtista() == artista){ 
            dvds_artista.push_back(dvds[i]); // Forma um vector contendo apenas os DVDs de "artista"
        }
    }

    for (int j = 0; j < dvds_artista.size(); j++){  // Nesse laço ocorre a ordenacao dos DVDs por ano de lançamento
        for (int i = 0; i < dvds_artista.size()-1; i++){
            if (dvds_artista[i].getLancamento() >= dvds_artista[i+1].getLancamento()){
                aux = dvds_artista[i];
                dvds_artista[i] = dvds_artista[i+1];
                dvds_artista[i+1] = aux;
            }
        }
    }
    cout << "=======================\n";
    cout << "Exibindo DVDs de " << artista << ":\n";
    for (int i = 0; i < dvds_artista.size(); i++){ // Exibe os DVDs na ordem de lançamento
        cout << "DVD " << i+1 <<": " << dvds_artista[i].getTitulo() << "(" << dvds_artista[i].getLancamento() << ")" << endl;
    }
}

void itemC(string artista, vector<CD> cds, vector<DVD> dvds){
    vector<Midia> midias;
    Midia aux;

    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getArtista() == artista){ 
            midias.push_back(cds[i]); // Insere os CDs da autoria de "artista" no vector "midias"
        }
    }

    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getArtista() == artista){ 
            midias.push_back(dvds[i]); // Insere os DVDs da autoria de "artista" no vector "midias"
        }
    }

    for (int j = 0; j < midias.size(); j++){  // Nesse laço ocorre a ordenacao dos CDS e DVDs por ano de lançamento
        for (int i = 0; i < midias.size()-1; i++){
            if (midias[i].getLancamento() >= midias[i+1].getLancamento()){
                aux = midias[i];
                midias[i] = midias[i+1];
                midias[i+1] = aux;
            }
        }
    }
    cout << "=======================\n";
    cout << "Exibindo Titulos de " << artista << ":\n";
    for (int i = 0; i < midias.size(); i++){ // Exibe os CDs e DVDs na ordem de lançamento
        cout << "Titulo " << i+1 <<": " << midias[i].getTitulo() << "(" << midias[i].getLancamento() << ")" << endl;
    }
}

void itemD(int ano, vector<CD> cds, vector<DVD> dvds){
    vector<Midia> midias;
    Midia aux;

    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getLancamento() == ano){ 
            midias.push_back(cds[i]); // Insere os CDs do lancados no ano "ano" no vector "midias"
        }
    }

    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getLancamento() == ano){ 
            midias.push_back(dvds[i]); // Insere os DVDs do lancados no ano "ano" no vector "midias"
        }
    }

    if (midias.size() == 0){
        cout << "=======================\n";
        cout << "Nenhum titulo foi lancado neste ano" << endl;
        return;
    }

    for (int j = 0; j < midias.size(); j++){  // Nesse laço ocorre a ordenacao das mídias por ordem alfabetica
        for (int i = 0; i < midias.size()-1; i++){
            if (midias[i].getTitulo() >= midias[i+1].getTitulo()){
                aux = midias[i];
                midias[i] = midias[i+1];
                midias[i+1] = aux;
            }
        }
    }

    cout << "=======================\n";
    cout << "Exibindo Titulos de " << ano << ":\n";
    for (int i = 0; i < midias.size(); i++){ // Exibe as midias lancadas no ano "ano"
        cout << "Titulo " << i+1 <<": " << midias[i].getTitulo() << " - " << midias[i].getArtista() << endl;
    }
}

void itemE(CD cd, DVD dvd){
    int t1 = cd.getFaixas().size();
    int t2 = dvd.getFaixas().size();
    vector<string> _cd = cd.getFaixas();
    vector<string> _dvd = dvd.getFaixas();
    int flag = 0;
    int numeracao = 0;

    cout << "=======================\n";
    cout << "Faixas em comum:\n";
    for (int i = 0; i < _cd.size(); i++){
        for (int j = 0; j < _dvd.size(); j++){
            if (_cd[i] == _dvd[j]){
                flag = 1;
                cout << numeracao+1 << "." << _dvd[j] << endl;
                _cd.erase(_cd.begin()+i);
                _dvd.erase(_dvd.begin()+j);
                numeracao++;
            }
        }
        if (flag == 1){
            i = -1;
        }
        flag = 0;
    }

    if (_cd.size() == t1){
        cout << "Nenhuma\n";
    }

    if (_cd.size() != 0){
        cout << "\nFaixas exclusivas do CD:\n";
        for (int i = 0; i < _cd.size(); i++){
            cout << i+1 << "." << _cd[i] << endl;
        }
    }
    else if (_cd.size() == 0){
        cout << "\nO CD nao possui faixas exclusivas\n";
    }

    if (_dvd.size() != 0){
        cout << "\nFaixas exclusivas do DVD:\n";
        for (int i = 0; i < _dvd.size(); i++){
            cout << i+1 << "." << _dvd[i] << endl;
        }
    }
    else if (_dvd.size() == 0){
        cout << "\nO DVD nao possui faixas exclusivas\n";
    }
}

void itemF(string genero, vector<CD> cds){
    cout << "---------------------" << endl;
    vector<CD> midias;
    CD aux;

    for (int i = 0; i < cds.size(); i++){
        if (cds[i].getGenero() == genero){
            midias.push_back(cds[i]);
        }
    }
    if (midias.size() == 0){
        cout << "Nao ha CDs desse genero\n";
        return;
    }
    for (int i = 0; i < midias.size(); i++){
        for (int j = 0; j < midias.size()-1; j++){
            if (midias[j].getTitulo() >= midias[j+1].getTitulo()){
                aux = midias[j];
                midias[j] = midias[j+1];
                midias[j+1] = aux;
            }
        }
    }
    cout << "CDs deste genero: " << endl;
    for (int i = 0; i < midias.size(); i++){
        cout << i+1 << "." << midias[i].getTitulo() << " - " << midias[i].getArtista() << endl;
    }
}

void itemF(string genero, vector<DVD> dvds){
    vector<DVD> midias;
    DVD aux;

    for (int i = 0; i < dvds.size(); i++){
        if (dvds[i].getGenero() == genero){
            midias.push_back(dvds[i]);
        }
    }
    if (midias.size() == 0){
        cout << "Nao ha DVDs desse genero\n";
        return;
    }
    for (int i = 0; i < midias.size(); i++){
        for (int j = 0; j < midias.size()-1; j++){
            if (midias[j].getTitulo() >= midias[j+1].getTitulo()){
                aux = midias[j];
                midias[j] = midias[j+1];
                midias[j+1] = aux;
            }
        }
    }
    cout << "\nDVDs deste genero: " << endl;
    for (int i = 0; i < midias.size(); i++){
        cout << i+1 << "." << midias[i].getTitulo() << " - " << midias[i].getArtista() << endl;
    }
}

void itemG(vector<CD> cds, vector<DVD> dvds){
    vector<string> keywords;
    keywords.push_back("teste");
    int flag = 0;

    for (int i = 0; i < cds.size(); i++){
        for(int j = 0; j < cds[i].getKeyWords().size(); j++){
            for (int k = 0; k < keywords.size(); k++){
                if (keywords[k] == cds[i].getKeyWords()[j]){
                    flag = 1;
                }
            }
            if (flag == 0){
                keywords.push_back(cds[i].getKeyWords()[j]);
            }
            flag = 0;
        } 
    }
    for (int i = 0; i < dvds.size(); i++){
        for(int j = 0; j < dvds[i].getKeyWords().size(); j++){
            for (int k = 0; k < keywords.size(); k++){
                if (keywords[k] == dvds[i].getKeyWords()[j]){
                    flag = 1;
                }
            }
            if (flag == 0){
                keywords.push_back(dvds[i].getKeyWords()[j]);
            }
            flag = 0;
        } 
    }  
    for (int i = 1; i < keywords.size(); i++){
        cout << i << "." << keywords[i] << endl;
    }
}

void print(vector<CD> cds, vector<DVD> dvds){
    system("clear || cls");
    cout << "Listando colecao de CDs e DVDs:\n";
    cout << "\nCDs:\n";
    for (int i = 0; i < cds.size(); i++){
        cout << i+1 << "." << cds[i].getTitulo() << " - " << cds[i].getArtista() << endl;
    }
    cout << "\nDVDs:\n";
    for (int i = 0; i < dvds.size(); i++){
        cout << i+1 << "." << dvds[i].getTitulo() << " - " << dvds[i].getArtista() << endl;
    }
}

void printCD(vector<CD> cds){
    system("clear || cls");
    cout << "Listando colecao de CDs:\n";
    for (int i = 0; i < cds.size(); i++){
        cout << i+1 << "." << cds[i].getTitulo() << " - " << cds[i].getArtista() << endl;
    }
}

void printDVD(vector<DVD> dvds){
    system("clear || cls");
    cout << "Listando colecao de DVDs:\n";
    for (int i = 0; i < dvds.size(); i++){
        cout << i+1 << "." << dvds[i].getTitulo() << " - " << dvds[i].getArtista() << endl;
    }
}

CD editCD(CD cd){
    string op;
    while (true){
        system("clear || cls");
        cout << "----------------------------\n";
        cout << "O que deseja editar?\n";
        cout << "[1] Artista\n[2] Titulo\n[3] Genero\n[4] Ano de lancamento\n[5] Faixas\n[6] Palavras-chave\n[7] Duracao\n[8] Volume\n[9] Coletanea?\n[0] Voltar\n";
        cout << "Input:";
        cin >> op;
        while (op != "1" && op != "2" && op != "3" && op != "4" && op != "5" && op != "6" && op != "7" && op != "8" && op != "9" && op != "0"){
            system("clear || cls");
            cout << "ERROR: Opcao invalida\nTente novamente.\n";
            cout << "----------------------------\n";
            cout << "[1] Artista\n[2] Titulo\n[3] Genero\n[4] Ano de lancamento\n[5] Faixas\n[6] Palavras-chave\n[7] Duracao\n[8] Volume\n[9] Coletanea?\n[0] Voltar\n";
            cout << "Input:";
            cin >> op;
        }

        if (op == "1"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo artista: ";
            getline(cin, str);
            cd.setArtista(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "2"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo titulo: ";
            getline(cin, str);
            cd.setTitulo(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "3"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo Genero: ";
            getline(cin, str);
            cd.setGenero(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "4"){
            system("clear || cls");
            int ano;
            cout << "Novo Ano de lancamento: ";
            cin >> ano;
            cd.setLancamento(ano);
            cin.ignore();
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "5"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar faixa\n[2] Remover Faixa\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar faixa\n[2] Remover Faixa\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    cin.ignore();
                    cout << "Nova faixa: ";
                    getline(cin, novo);
                    cd.setFaixas(novo);
                    cout << "Faixa adicionada.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (cd.getFaixas().size() == 0){
                        cout << "Nao ha faixas para remover\n";
                    }
                    else {
                        int num;
                        cout << "Faixas:\n";
                        for (int i = 0; i < cd.getFaixas().size(); i++){
                            cout << i + 1 << "." << cd.getFaixas()[i] << endl;
                        }
                        cout << "Numero da faixa que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > cd.getFaixas().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            cd.removeFaixa(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "6"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar palavra-chave\n[2] Remover palavra-chave\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar palavra-chave\n[2] Remover palavra-chave\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    cin.ignore();
                    cout << "Nova palavra-chave: ";
                    getline(cin, novo);
                    cd.setKeyWords(novo);
                    cout << "Palavra-chave adicionada.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (cd.getKeyWords().size() == 0){
                        cout << "Nao ha palavras-chave para remover\n";
                    }
                    else {
                        int num;
                        cout << "Palavras-chave:\n";
                        for (int i = 0; i < cd.getKeyWords().size(); i++){
                            cout << i + 1 << "." << cd.getKeyWords()[i] << endl;
                        }
                        cout << "Numero da palavra-chave que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > cd.getKeyWords().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            cd.removeKeyWord(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "7"){
            system("clear || cls");
            int novo;
            cout << "Nova duracao: ";
            cin >> novo;
            cd.setDuracao(novo);
            cin.ignore();
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "8"){
            system("clear || cls");
            float novo;
            cout << "Novo volume: ";
            cin >> novo;
            cd.setVolume(novo);
            cin.ignore();
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "9"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Eh uma coletanea? [S/N]\nInput:";
            getline(cin, str);
            while (str != "S" && str != "N" && str != "s" && str != "n"){
                system("clear || cls");
                cout << "ERRO: Opcao invalida\nTente Novamente.\n";
                cout << "----------------------------\n";
                cout << "Eh uma coletanea? [S/N]\nInput:";
                getline(cin, str);
            }
            if (str == "S" || str == "s"){
                cd.setColetanea(true);
            }
            else {
                cd.setColetanea(false);
            }
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "0"){
            break;
        }
    }

    return cd;
}

DVD editDVD(DVD dvd){
    string op;
    while (true){
        system("clear || cls");
        cout << "----------------------------\n";
        cout << "O que deseja editar?\n";
        cout << "[1] Artista\n[2] Titulo\n[3] Genero\n[4] Ano de lancamento\n[5] Faixas\n[6] Palavras-chave\n[7] Formatos de audio\n[8] Formatos de tela\n[9] Legendas\n[0] Voltar\n";
        cout << "Input:";
        cin >> op;
        while (op != "1" && op != "2" && op != "3" && op != "4" && op != "5" && op != "6" && op != "7" && op != "8" && op != "9" && op != "0"){
            system("clear || cls");
            cout << "ERROR: Opcao invalida\nTente novamente.\n";
            cout << "----------------------------\n";
            cout << "[1] Artista\n[2] Titulo\n[3] Genero\n[4] Ano de lancamento\n[5] Faixas\n[6] Palavras-chave\n[7] Formatos de audio\n[8] Formatos de tela\n[9] Legendas\n[0] Voltar\n";
            cout << "Input:";
            cin >> op;
        }

        if (op == "1"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo artista: ";
            getline(cin, str);
            dvd.setArtista(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "2"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo titulo: ";
            getline(cin, str);
            dvd.setTitulo(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "3"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Novo Genero: ";
            getline(cin, str);
            dvd.setGenero(str);
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "4"){
            system("clear || cls");
            int ano;
            cout << "Novo Ano de lancamento: ";
            cin >> ano;
            dvd.setLancamento(ano);
            cin.ignore();
            cout << "Alteracao realizada com sucesso.\n";
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "5"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar faixa\n[2] Remover Faixa\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar faixa\n[2] Remover Faixa\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    cin.ignore();
                    cout << "Nova faixa: ";
                    getline(cin, novo);
                    dvd.setFaixas(novo);
                    cout << "Faixa adicionada.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (dvd.getFaixas().size() == 0){
                        cout << "Nao ha faixas para remover\n";
                    }
                    else {
                        int num;
                        cout << "Faixas:\n";
                        for (int i = 0; i < dvd.getFaixas().size(); i++){
                            cout << i + 1 << "." << dvd.getFaixas()[i] << endl;
                        }
                        cout << "Numero da faixa que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > dvd.getFaixas().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            dvd.removeFaixa(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "6"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar palavra-chave\n[2] Remover palavra-chave\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar palavra-chave\n[2] Remover palavra-chave\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    cin.ignore();
                    cout << "Nova palavra-chave: ";
                    getline(cin, novo);
                    dvd.setKeyWords(novo);
                    cout << "Palavra-chave adicionada.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (dvd.getKeyWords().size() == 0){
                        cout << "Nao ha palavras-chave para remover\n";
                    }
                    else {
                        int num;
                        cout << "Palavras-chave:\n";
                        for (int i = 0; i < dvd.getKeyWords().size(); i++){
                            cout << i + 1 << "." << dvd.getKeyWords()[i] << endl;
                        }
                        cout << "Numero da palavra-chave que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > dvd.getKeyWords().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            dvd.removeKeyWord(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "7"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar formato de audio\n[2] Remover formato de audio\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar formato de audio\n[2] Remover formato de audio\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    vector<string> audio = dvd.getFormatoAudio();

                    cin.ignore();
                    cout << "Novo formato de audio: ";
                    getline(cin, novo);
                    audio.push_back(novo);
                    dvd.setFormatoAudio(audio);
                    cout << "Formato de audio adicionado.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (dvd.getFormatoAudio().size() == 0){
                        cout << "Nao ha formatos de audio para remover\n";
                    }
                    else {
                        int num;
                        cout << "Formatos de audio:\n";
                        for (int i = 0; i < dvd.getFormatoAudio().size(); i++){
                            cout << i + 1 << "." << dvd.getFormatoAudio()[i] << endl;
                        }
                        cout << "Numero do formato de audio que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > dvd.getFormatoAudio().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            dvd.removeFormatoAudio(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "8"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar formato de tela\n[2] Remover formato de tela\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar formato de tela\n[2] Remover formato de tela\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    vector<string> tela = dvd.getFormatoTela();

                    cin.ignore();
                    cout << "Novo formato de tela: ";
                    getline(cin, novo);
                    tela.push_back(novo);
                    dvd.setFormatoTela(tela);
                    cout << "Formato de tela adicionado.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (dvd.getFormatoTela().size() == 0){
                        cout << "Nao ha formatos de tela para remover\n";
                    }
                    else {
                        int num;
                        cout << "Formatos de tela:\n";
                        for (int i = 0; i < dvd.getFormatoTela().size(); i++){
                            cout << i + 1 << "." << dvd.getFormatoTela()[i] << endl;
                        }
                        cout << "Numero do formato de tela que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > dvd.getFormatoTela().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            dvd.removeFormatoTela(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "9"){
            while (true){
                system("clear || cls");
                string str;
                cout << "----------------------------\n";
                cout << "O que deseja fazer?\n";
                cout << "[1] Adicionar legenda\n[2] Remover legenda\n[3] Voltar\n";
                cout << "Input:";
                cin >> str;
                while (str != "1" && str != "2" && str != "3"){
                    system("clear || cls");
                    cout << "ERROR: Opcao invalida\nTente novamente.\n";
                    cout << "----------------------------\n";
                    cout << "[1] Adicionar legenda\n[2] Remover legenda\n[3] Voltar\n";
                    cout << "Input:";
                    cin >> str;
                }
                if (str == "1"){
                    system("clear || cls");
                    string novo;
                    vector<string> legenda = dvd.getLegendas();

                    cin.ignore();
                    cout << "Nova legenda: ";
                    getline(cin, novo);
                    legenda.push_back(novo);
                    dvd.setLegendas(legenda);
                    cout << "Legenda adicionada.\n";
                    cout << "\nPressione enter para continuar...\n";
                    getchar();
                }
                else if (str == "2"){
                    system("clear || cls");
                    if (dvd.getLegendas().size() == 0){
                        cout << "Nao ha legendas para remover\n";
                    }
                    else {
                        int num;
                        cout << "Legendas:\n";
                        for (int i = 0; i < dvd.getLegendas().size(); i++){
                            cout << i + 1 << "." << dvd.getLegendas()[i] << endl;
                        }
                        cout << "Numero da legenda que deseja remover: ";
                        cin >> num;
                        if (num < 1 || num > dvd.getLegendas().size()){
                            cout << "\nERROR: indice invalido\nRemocao fracassou.\n";
                        }
                        else {
                            num--;
                            dvd.removeLegendas(num);
                            cout << "Remocao bem sucedida\n";
                        }
                    }
                    cout << "\nPressione enter para continuar...\n";
                    cin.ignore();
                    getchar();
                }
                else if (str == "3"){
                    break;
                }
            }
        }
        else if (op == "0"){
            break;
        }
    }

    return dvd;
}