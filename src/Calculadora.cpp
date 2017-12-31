#include "Calculadora.h"


//Setters
void Calculadora::setResultado(double resultado){
    this->resultado = resultado;
}
void Calculadora::setQtdNotas(int qtdNotas){
    this->qtdNotas = qtdNotas;
}
void Calculadora::setNota(double *nota){
    for(int i=0; i <= getQtdNotasArray(); i++){
        *(this->nota + i) = *(nota + i);
    }
}

//Getters
double Calculadora::getResultado(){
    return this->resultado;
}
int Calculadora::getQtdNotasArray(){
    return this->qtdNotas - 1;
}
int Calculadora::getQtdNotas(){
    return this->qtdNotas;
}

//Operações
double Calculadora::soma(double n1, double n2){
    return this->resultado = (double)n1 + n2;
}
double Calculadora::sub(double n1, double n2){
    return this->resultado = (double)n1 - n2;
}
double Calculadora::multi(double n1, double n2){
    return this->resultado = (double)n1 * n2;
}
double Calculadora::div(double n1, double n2){
    return this->resultado = (double)n1 / n2;
}
void Calculadora::tabuada(int num){
    for(int i=0; i <=10; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }
}
//Below the execution of program using dynamic memory alocation in HEAP
double Calculadora::calculaMedia(){

    double resultado = 0;
    int i = 0;
    int qtdNotas = this->getQtdNotas();

   while(i <= this->getQtdNotasArray()){
        resultado += *(this->nota + i);
        i++;
    }

    resultado = resultado / (double)qtdNotas;

    return this->resultado = resultado;
}

