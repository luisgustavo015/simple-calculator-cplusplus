#include <iostream>
#include <windows.h>
#include <vector>
#include "include/Calculadora.h"

using namespace std;

int main()
{
    int num = 0, teste, opt; //Variables that have function of control the structures of repetition
    double n1, n2, media = 0;  //variables that receive the input of data of an cin (iostream library method) for pass a parameter in functions of the class Calculadora
    vector<double> notas(3, 0); //Declaration of array's variables utilizing vector library

    Calculadora *o = new Calculadora;

    do{
        system("CLS");
        cout << "Qual operacao deseja realizar?\n";
        cout << "1 - Soma\n";
        cout << "2 - Subtracao\n";
        cout << "3 - Multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "5 - Tabuada\n";
        cout << "6 - Media do aluno\n";
        cout << "7 - SAIR\n";
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
                do{
                    media = 0;
                    for(int a=0; a <= 3; a++){
                        notas[a] = 0;
                    }
                    system("CLS");
                    cout << "Programa Media de um Aluno. Abaixo serao solicitadas as notas dos 4 bimentres para ser calculada a media final.\n";

                    //Adicionando notas ao array
                    for(int i=0; i <= 3; i++){
                        cout << i + 1 << " :";
                        cin >> notas[i]; cout << endl;
                    }

                    //Calculo da media com vetores
                    for(int x = 0; x <= 3; x++){
                        media += notas[x];
                    }

                    media /= 4;

                    cout << "Notas recolhidas com sucesso! A media para este aluno e de: " << media;

                    cout << endl;cout << endl;
                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 7:
                break;
            default:
                cout << "Opcao Invalida!\n";
        }

    }while(opt != 7);

    //This section have a function of remove the objects allocated in the memory
    delete o;

    return 0;
}
