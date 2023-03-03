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
    	cout<< "Thanos está escondido em uma arvore numerada de 1 a 50 tente achá-lo" << endl;
        cout<< "Dificuldades"<<endl;
        
	    cout << "1-Fácil (15 tentativas)"<<endl;
	    cout << "2-Médio (10 tentativas)"<<endl;
	    cout << "3-Difícil (5 tentativas)"<<endl;
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
            cout << "Escolha um número:";
            
            cin >> nt;
            if (nt > esconde) {
                cout<< "Thanos está numa árvore menor ";
            }
            
            else if (nt < esconde) {
                cout<< "Thanos está numa árvore maior ";
            }
            
            else {
                acertou = true;
                break;
            }
            
        }
        if (acertou == false) {
            cout << "\nSuas tentativas acabaram. O Thanos estava na árvore " << arvores << endl;
        }
        
        else {
            cout<<"\nVocê achou o Thanos";
        }
        
        cout << "\nDeseja jogar novamente? (sim/não): ";
        cin >> jogarNovamente;
    }
    return 0;
}
