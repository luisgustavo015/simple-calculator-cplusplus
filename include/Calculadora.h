#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

using namespace std;

class Calculadora{

private:
    double resultado;
    int qtdNotas;
    double *nota = new double;
public:
    //Setters
    void setResultado(double resultado);
    void setQtdNotas(int qtdNotas);
    void setNota(double *nota);
    //Getters
    double getResultado();
    int getQtdNotasArray();
    int getQtdNotas();

    //Operações
    double soma(double n1, double n2);
    double sub(double n1, double n2);
    double multi(double n1, double n2);
    double div(double n1, double n2);
    void tabuada(int num);
    double calculaMedia();
};


#endif // CALCULADORA_H
