#include <iostream> //Input and Output library
#include <windows.h>
#include <vector>
#include <string>
#include "include/Calculadora.h"

using namespace std;

int main()
{
    int num = 0, teste, opt, qtdNotas; //Variables that have function of control the structures of repetition
    double n1, n2;  //variables that receive the input of data of an cin (iostream library method) for pass a parameter in functions of the class Calculadora
    double *nota = new double; //Pointer variable for dynamic memory allocation
    vector<double> notas(3, 0); //Declaration of array's variables utilizing vector library

    Calculadora *o = new Calculadora; //Building the object o and utilizing the pointer for reserve of memory

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
                    o->tabuada(num);

                    cout << "O que deseja fazer agora? 1 - Repetir Operacao / 2 - Fazer Outra Operacao\n";
                    cin >> teste;
                }while(teste == 1);
                break;
            case 6:
                do{
                    system("CLS");
                    cout << "Programa Media de um Aluno. Abaixo serao solicitadas as notas dos 4 bimentres para ser calculada a media final.\n";
                    cout << "A media do aluno sera baseada em quantas notas? ";
                    cin >> qtdNotas; cout << endl;

                    o->setQtdNotas(qtdNotas); //Insere quantidade de notas sobre qual o calculo será feito

                    for(int i=0; i <= o->getQtdNotasArray(); i++){
                        cout << i + 1 << " : ";
                        cin >> *(nota + i); cout << endl; //Guarda na variável ponteiro, em seu devido espaço(array), os valores das medias inseridas pelo usuário
                    }

                    o->setNota(nota); //pega referência do ponteiro onde foram alocadas as notas e passa pela função para ser atribuída a um atributo dentro da classe
                    o->calculaMedia(); //com todos os dados já inseridos nos atributos do objeto, este método somente manda executar o calculo da média aritmética simples, e manda guardar o resultado em um atributo de nome resultado para somente ser recuperado posteriormente

                    cout << "Notas recolhidas com sucesso! A media para este aluno e de: " << o->getResultado(); //Método que somente recupera o resultado dos calculos já realizados anteriormente

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
    delete nota;

    return 0;
}
