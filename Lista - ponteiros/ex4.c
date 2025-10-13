/*Faça um programa que calcula o aumento e o novo salário dos funcionários de uma empresa. 
Utilize uma matriz para guardar o salário, o valor do aumento e o novo salário de todos 
os 10 funcionários. Os salários dos funcionários e o índice de reajuste devem ser lidos 
pela função main(). O índice de reajuste deve ser lido uma só vez  e usado para todos os funcionários.
Faça uma função que, recebendo o salário de um funcionário e o índice de reajuste, 
calcula seu aumento e o novo salário e os retorna, por parâmetro, para a função main(). 
Utilize somente passagem de parâmetro por referência. A função não deve receber toda a 
matriz como parâmetro.
Ao final a função main() deverá fazer a impressão de um relatório apresentando o salário, 
o aumento e o novo salário de todos os funcionários.*/

#include <stdio.h>
#define TAM 10

float calSalario(float *salario, float *aumentoPor, float *aumentoValor){ 
    *aumentoValor = (*aumentoPor / 100) * *salario;
    float novoSalario = *salario + *aumentoValor;

    return novoSalario;
}

int main(){
    float matriz[TAM][3], aumentoPor;
    int i;

    printf("\nInsira a porcentagem de aumento do salario dos funcionarios: ");
    scanf("%f", &aumentoPor);
    
    for(i=0; i<TAM; i++){
        printf("\nInsira o salario do funcionario %i: ", i);
        scanf("%f", &matriz[i][0]);

        matriz[i][2] = calSalario(&matriz[i][0], &aumentoPor, &matriz[i][1]);
    }

    printf("\n\nRELATORIO DE SALARIOS");
    for(i=0; i<TAM; i++){
        printf("\n\nFuncionario %i:", i);
        printf("\nSalario antigo: R$%.2f", matriz[i][0]);
        printf("\nAumento: R$%.2f", matriz[i][1]);
        printf("\nSalario novo: R$%.2f", matriz[i][2]);
    }

    return 0;
}