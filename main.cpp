#include <iostream>
#include <windows.h>
#include "include/Calculadora.h"

using namespace std;

int main()
{
    int num = 0, teste = 0, opt;
    double n1, n2;

    Calculadora *o = new Calculadora;

    do{
        system("CLS");
        cout << "Qual operacao deseja realizar?\n";
        cout << "1 - soma\n";
        cout << "2 - subtracao\n";
        cout << "3 - multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "5 - Tabuada\n";
        cout << "6 - SAIR\n";
        cin >> opt; cout << endl;

        switch(opt){
            case 1:
                do{
                    system("CLS");
                    cout << "Programa Soma:\n";
                    cout << "Entre com o primeiro numero: ";
                    cin >> n1; cout << endl;
                     cout << "Entre com o segundo numero: ";
                    cin >> n2; cout << endl;
                    o->soma(n1,n2);
                    cout << "Resultado da operacao: " << o->getResultado() << endl << endl;
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 2:
                do{
                    system("CLS");
                    cout << "Programa Subtracao:\n";
                    cout << "Entre com o primeiro numero: ";
                    cin >> n1; cout << endl;
                     cout << "Entre com o segundo numero: ";
                    cin >> n2; cout << endl;
                    o->sub(n1,n2);
                    cout << "Resultado da operacao: " << o->getResultado() << endl;
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 3:
                do{
                    system("CLS");
                    cout << "Programa Multiplicacao:\n";
                    cout << "Entre com o primeiro numero: ";
                    cin >> n1; cout << endl;
                     cout << "Entre com o segundo numero: ";
                    cin >> n2; cout << endl;
                    o->multi(n1,n2);
                    cout << "Resultado da operacao: " << o->getResultado() << endl;
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 4:
                do{
                    system("CLS");
                    cout << "Programa Divisao:\n";
                    cout << "Entre com o primeiro numero: ";
                    cin >> n1; cout << endl;
                     cout << "Entre com o segundo numero: ";
                    cin >> n2; cout << endl;
                    o->div(n1,n2);
                    cout << "Resultado da operacao: " << o->getResultado() << endl;
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 5:
                do{
                    system("CLS");
                    cout << "Programa tabuada: qual tabuada deseja saber?";
                    cin >> num; cout << endl;

                    for(int i=0; i <=10; i++){
                        cout << num << " x " << i << " = " << num*i << endl;
                    }
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 6:
                break;
            default:
                cout << "Opcao Invalida!\n";
        }

    }while(opt != 6);

    return 0;
}