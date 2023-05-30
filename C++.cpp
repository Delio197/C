#include <iostream>
using namespace std;
/* Escreva um programa em C++ que receba os salários de uma empresa farmacêutica, essa empresa possui 80 funcionários
Ae no final do cadastro mostrar a média salarial da empresa e o somatório total dos salários */
int main() {
    const int numFuncionarios = 80;
    double salario;
    double totalSalarios = 0;


    int i = 1;
    while (i <= numFuncionarios) {
        cout<<"Digite o salario do funcionario"<<i<<":";
        cin>> salario;
        totalSalarios += salario;
        i++;
    }

    double mediaSalarial = totalSalarios / numFuncionarios;
    cout<<"Media Salarial:" << mediaSalarial <<endl;
    cout<<"Somatorio Total dos Salarios:" <<totalSalarios<<endl;

    return 0;
}

