#include <iostream>    
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main () {
    setlocale (LC_ALL, "Portuguese");
    
    string jogarNovamente = "sim";
    
    while (jogarNovamente == "sim") {
        bool acertou = false;
        
        srand(time(NULL));
        
        int arvores = rand() % 50 + 1;
    
        int tentativas = 0;
        int palpite;
    
        int esconde, dificuldade, nt;
        
        system("cls"); 
        
        cout<< "Bem vindo ao jogo do Thanos X Lanterna Verde" << endl;
    	cout<< "Thanos est� escondido em uma arvore numerada de 1 a 50 tente ach�-lo" << endl;
        cout<< "Dificuldades"<<endl;
        
	    cout << "1-F�cil (15 tentativas)"<<endl;
	    cout << "2-M�dio (10 tentativas)"<<endl;
	    cout << "3-Dif�cil (5 tentativas)"<<endl;
	    cout << "Escolha a dificuldade: ";
	    cin>>dificuldade;
        
        if (dificuldade == 1) {
            tentativas = 15;
        }
        
        else if (dificuldade == 2){
            tentativas =10;
        }
        
        else{
            tentativas = 5;
        }
        
        esconde = arvores;
        int tentativaAtual = 1;
        for (tentativaAtual; tentativaAtual <= tentativas; tentativaAtual++){
            cout << "\nTentativa " << tentativaAtual << " de " << tentativas << endl;
            cout << "Escolha um n�mero:";
            
            cin >> nt;
            if (nt > esconde) {
                cout<< "Thanos est� numa �rvore menor ";
            }
            
            else if (nt < esconde) {
                cout<< "Thanos est� numa �rvore maior ";
            }
            
            else {
                acertou = true;
                break;
            }
            
        }
        if (acertou == false) {
            cout << "\nSuas tentativas acabaram. O Thanos estava na �rvore " << arvores << endl;
        }
        
        else {
            cout<<"\nVoc� achou o Thanos";
        }
        
        cout << "\nDeseja jogar novamente? (sim/n�o): ";
        cin >> jogarNovamente;
    }
    return 0;
}
