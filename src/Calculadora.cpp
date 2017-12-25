#include "Calculadora.h"

//Setters
void Calculadora::setResultado(double resultado){
    this->resultado = resultado;
}
//Getters
double Calculadora::getResultado(){
    return this->resultado;
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
