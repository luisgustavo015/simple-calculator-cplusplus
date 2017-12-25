#ifndef CALCULADORA_H
#define CALCULADORA_H

using namespace std;

class Calculadora{

private:
    double resultado;
public:
    //Setters
    void setResultado(double resultado);
    //Getters
    double getResultado();

    //Opera��es
    double soma(double n1, double n2);
    double sub(double n1, double n2);
    double multi(double n1, double n2);
    double div(double n1, double n2);
};


#endif // CALCULADORA_H
