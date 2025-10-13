/*escreva um programa que recebe um valor inteiro do usuário e depois
calcula seu quadrado e seu cubo (duas funções). Utilize chamada de
parâmetro por referência. */

#include <stdio.h>
#include <string.h>

int calQuadrado(int *pnum){
    return *pnum * *pnum;
}

int calCubo(int *pnum){
    return *pnum * *pnum * *pnum;
}

int main(){
    int num; 

    printf("\nDigite um número: ");
    scanf(" %i", &num);

    printf("\nO QUADRADO do número é: %i", calQuadrado(&num));
    printf("\nO CUBO do número é: %i", calCubo(&num));
    
    return 0;
}