#include "funcoes.h"

int main (){
    vector<CD> cds;
    vector<DVD> dvds;

    while (true){
        system("clear || cls");
        string op;
        cout << "-------------------\nSelecione uma opcao:\n[1] Adicionar CD\n[2] Adicionar DVD\n[3] Exibir colecao \n[4] Opcoes avancadas\n[5] Deletar um CD\n[6] Deletar um DVD\n[7] Editar um CD\n[8] Editar um DVD\n[9] Encerrar\n";
        cout << "Input:";
        cin >> op;

        while (op != "1" && op != "2" && op != "3" && op != "4" && op != "5" && op != "6" && op != "7" && op != "8" && op != "9"){
            system("clear || cls");
            cout << "ERROR: opcao invalida\nTente novamente.\n";
            cout << "-------------------\nSelecione uma opcao:\n[1] Adicionar CD\n[2] Adicionar DVD\n[3] Exibir colecao \n[4] Opcoes avancadas\n[5] Deletar um CD\n[6] Deletar um DVD\n[7] Editar um CD\n[8] Editar um DVD\n[9] Encerrar\n";
            cout << "Input:";
            cin >> op;
        }

        if (op == "1"){
            system("clear || cls");
            CD *novo_cd = new CD();
            string str;
            int integer;
            float f;

            cin.ignore();
            cout << "Artista: ";
            getline(cin, str);
            cout << endl;
            novo_cd->setArtista(str);

            cout << "Titulo: ";
            getline(cin, str);
            cout << endl;
            novo_cd->setTitulo(str); 

            cout << "Genero: ";
            getline(cin, str);
            cout << endl;
            novo_cd->setGenero(str);

            cout << "Ano de lancamento: ";
            cin >> integer;
            cout << endl;
            novo_cd->setLancamento(integer);

            cout << "Numero de faixas: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Faixa " << i << ": ";
                getline(cin, str);
                novo_cd->setFaixas(str);
            }
            cout << endl;

            cout << "Quantidade de palavras-chave: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Palavra-chave " << i << ": ";
                getline(cin, str);
                novo_cd->setKeyWords(str);
            }
            cout << endl;

            cout << "Duracao(min): ";
            cin >> integer;
            cout << endl;
            novo_cd->setDuracao(integer);

            cout << "Volume: ";
            cin >> f;
            cout << endl;
            novo_cd->setVolume(f);

            cin.ignore();
            cout << "Eh uma coletanea? [S/N]\nInput:";
            getline(cin, str);
            while (str != "S" && str != "N" && str != "s" && str != "n"){
                cout << "ERRO: Opcao invalida\n";
                cout << "Eh uma coletanea? [S/N]\nInput:";
                getline(cin, str);
            }
            if (str == "S" || str == "s"){
                novo_cd->setColetanea(true);
            }
            else{
                novo_cd->setColetanea(false);
            }
        
            cds.push_back(*novo_cd);
            cout << "Pressione enter para continuar...";
            getchar(); 
        }
        else if (op == "2"){
            system("clear || cls");
            DVD *novo_dvd = new DVD();
            string str;
            vector<string> formato_audio;
            vector<string> formato_tela;
            vector<string> legendas;
            int integer;
            float f;
            

            cin.ignore();
            cout << "Artista: ";
            getline(cin, str);
            cout << endl;
            novo_dvd->setArtista(str);

            cout << "Titulo: ";
            getline(cin, str);
            cout << endl;
            novo_dvd->setTitulo(str); 

            cout << "Genero: ";
            getline(cin, str);
            cout << endl;
            novo_dvd->setGenero(str);

            cout << "Ano de lancamento: ";
            cin >> integer;
            cout << endl;
            novo_dvd->setLancamento(integer);

            cout << "Numero de faixas: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Faixa " << i << ": ";
                getline(cin, str);
                novo_dvd->setFaixas(str);
            }
            cout << endl;

            cout << "Quantidade de palavras-chave: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Palavra-chave " << i << ": ";
                getline(cin, str);
                novo_dvd->setKeyWords(str);
            }
            cout << endl;

            cout << "Numero de formatos de audio: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Formato de audio " << i << ": ";
                getline(cin, str);
                formato_audio.push_back(str);
            }
            novo_dvd->setFormatoAudio(formato_audio);

            cout << "Numero de formatos de tela: ";
            cin >> integer;
            cout << endl;
            cin.ignore();
            for (int i = 1; i <= integer; i++){
                cout << "Formato de tela " << i << ": ";
                getline(cin, str);
                formato_tela.push_back(str);
            }
            novo_dvd->setFormatoTela(formato_tela);
           
            for (int i = 1; i <= novo_dvd->getFaixas().size(); i++){
                cout << "Legenda faixa " << i << ": ";
                getline(cin, str);
                legendas.push_back(str);
           }
            novo_dvd->setLegendas(legendas);

            dvds.push_back(*novo_dvd);
            cout << "Pressione enter para continuar...";
            getchar();
        }
        else if (op == "3"){
            print(cds, dvds);
            cin.ignore();
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "4"){
        while(true){
        system("clear || cls");
        string op;
        cout << "-------------------\nSelecione uma opcao:\n[1] Exibir CDs de um artista\n[2] Exibir DVDs de um artista\n[3] Exibir titulos de um artista\n[4] Exibir todos os titulos de um ano\n[5] Exibir faixas em comum de um CD e um DVD\n[6] Exibir as midias de um genero\n[7] Exibir palavras-chave\n[8] Sair\n";
        cout << "Input:";
        cin >> op;

        while (op != "1" && op != "2" && op != "3" && op != "4" && op != "5" && op != "6" && op != "7" && op != "8"){
            system("clear || cls");
            cout << "ERROR: opcao invalida\nTente novamente.\n";
            cout << "-------------------\nSelecione uma opcao:\n[1] Exibir CDs de um artista\n[2] Exibir DVDs de um artista\n[3] Exibir titulos de um artista\n[4] Exibir todos os titulos de um ano\n[5] Exibir faixas em comum de um CD e um DVD\n[6] Exibir as midias de um genero\n[7] Exibir palavras-chave\n[8] Sair\n";
            cout << "Input:";
            cin >> op;
        }

        if (op == "1"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Nome do artista: ";
            getline(cin, str);

            if (!findArtista(str, cds) && !findArtista(str,dvds)){
                cout << "Artista nao encontrado.\n";
            }
            else if (!findArtista(str, cds) && findArtista(str,dvds)){
                cout << "Esse artista nao possui nenhum CD\n";
            }
            else{
                itemA(str, cds);
            }
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "2"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Nome do artista: ";
            getline(cin, str);

            if (!findArtista(str, cds) && !findArtista(str,dvds)){
                cout << "Artista nao encontrado.\n";
            }
            else if (findArtista(str, cds) && !findArtista(str,dvds)){
                cout << "Esse artista nao possui nenhum DVD\n";
            }
            else{
                itemB(str, dvds);
            }
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "3"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Nome do artista: ";
            getline(cin, str);
            if (!findArtista(str, cds) && !findArtista(str, dvds)){
                cout << "Artista nao encontrado.\n";
            }
            else{
                itemC(str, cds, dvds);
            }
            cout << "\nPressione enter para continuar...";
            getchar(); 
            system("clear || cls");
        }
        else if (op == "4"){
            system("clear || cls");
            int ano;
            cout << "Ano: ";
            cin >> ano;
            itemD(ano, cds, dvds);
            cin.ignore();
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "5"){
            system("clear || cls");
            string str;
            cin.ignore();
            cout << "Nome do artista: ";
            getline(cin, str);
            
            if (!findArtista(str, cds) && !findArtista(str,dvds)){
                cout << "Artista nao encontrado.\n";
            }
            else if (!findArtista(str,cds)){
                cout << "Esse artista nao possui nenhum CD\n";
            }
            else if (!findArtista(str,dvds)){
                cout << "Esse artista nao possui nenhum DVD\n";
            }
            else{
                string cd, dvd;
                
                itemA(str, cds);
                cout << "escolha o CD: ";
                getline(cin, cd);
                while (!findTitulo(str, cd, cds)){
                    cout << "Titulo nao encontrado, tente novamente\n";
                    itemA(str, cds);
                    cout << "escolha o CD: ";
                    getline(cin, cd);   
                }

                itemB(str, dvds);
                cout << "escolha o DVD: ";
                getline(cin, dvd);
                while (!findTitulo(str, dvd, dvds)){
                    cout << "Titulo nao encontrado, tente novamente\n";
                    itemB(str, dvds);
                    cout << "escolha o DVD: ";
                    getline(cin, dvd);   
                }
                
                CD _cd;
                DVD _dvd;

                for (int i = 0; i < cds.size(); i++){
                    if (cds[i].getTitulo() == cd){
                        _cd = cds[i];
                    }
                }

                for (int i = 0; i < dvds.size(); i++){
                    if (dvds[i].getTitulo() == dvd){
                        _dvd = dvds[i];
                    }
                }
                itemE(_cd, _dvd);
            }
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "6"){
            system("clear || cls");
            string str;
            cout << "Genero: ";
            cin.ignore();
            getline(cin, str);

            itemF(str, cds);
            itemF(str, dvds);
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "7"){
            system("clear || cls");
            cout << "=======================\n";
            cout << "Exibindo palavras-chave\n";
            itemG(cds, dvds);
            cin.ignore();
            cout << "\nPressione enter para continuar...";
            getchar(); 
        }
        else if (op == "8"){
            system("clear || cls"); 
            break;
        }
    }
        }
        else if (op == "5"){
            system("clear || cls");
            cin.ignore();
            if (cds.size() == 0){
                cout << "Colecao de CDS vazia.\n";
            }
            else {
                string str;
                bool find = false;
                printCD(cds);
                cout << "\nTitulo do CD: ";
                getline(cin, str);

                for (int i = 0; i < cds.size(); i++){
                    if (cds[i].getTitulo() == str){
                        cds.erase(cds.begin()+i);
                        find = true;
                    }
                }
                if (find){
                    cout << "CD removido.\n";
                }
                else {
                    cout << "Este titulo nao consta na colecao\n";
                }
            }
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "6"){
            system("clear || cls");
            cin.ignore();
            if (dvds.size() == 0){
                cout << "Colecao de DVDs vazia.\n";
            }
            else {
                string str;
                bool find = false;
                printDVD(dvds);
                cout << "\nTitulo do DVD: ";
                getline(cin, str);

                for (int i = 0; i < dvds.size(); i++){
                    if (dvds[i].getTitulo() == str){
                        dvds.erase(dvds.begin()+i);
                        find = true;
                    }
                }
                if (find){
                    cout << "DVD removido.\n";
                }
                else {
                    cout << "Este titulo nao consta na colecao\n";

                }
            }
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "7"){
            string str;
            system ("clear || cls");
            cin.ignore();
            if (cds.size() == 0){
                cout << "Colecao de CDs vazia.\n";
            }
            else {
                bool find = false;
                printCD(cds);
                cout << "Titulo do CD: ";
                getline(cin, str);
                for (int i = 0; i < cds.size(); i++){
                    if (cds[i].getTitulo() == str){
                        find = true;
                        cds[i] = editCD(cds[i]);
                    }
                }
                if (find){
                    cout << "CD alterado com sucesso.\n";
                }
                else {
                    cout << "Este titulo nao consta na colecao\n";
                }
            }
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "8"){
            string str;
            system ("clear || cls");
            cin.ignore();
            if (dvds.size() == 0){
                cout << "Colecao de DVDs vazia.\n";
            }
            else {
                bool find = false;
                printDVD(dvds);
                cout << "Titulo do DVD: ";
                getline(cin, str);
                for (int i = 0; i < dvds.size(); i++){
                    if (dvds[i].getTitulo() == str){
                        find = true;
                        dvds[i] = editDVD(dvds[i]);
                    }
                }
                if (find){
                    cout << "DVD alterado com sucesso.\n";
                }
                else {
                    cout << "Este titulo nao consta na colecao\n";
                }
            }
            cout << "\nPressione enter para continuar...";
            getchar();
        }
        else if (op == "9"){
            system("clear || cls");
            break;
        }
    }

    cout << "-------------------\nPrograma encerrado.\n-------------------\n";

    return 0;
}
