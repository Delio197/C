#include <iostream>
using namespace std;
/* Escreva um programa em C++ que receba os sal�rios de uma empresa farmac�utica, essa empresa possui 80 funcion�rios
Ae no final do cadastro mostrar a m�dia salarial da empresa e o somat�rio total dos sal�rios */
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

