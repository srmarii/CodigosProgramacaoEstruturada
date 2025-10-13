/*Faça um programa que apresenta as seguintes funções:

- Leitura da matriz: função que lê valores para a matriz de inteiros recebida como parâmetro pela função.

- Impressão da matriz: função que imprime a matriz passada como parâmetro para a função.

- Copiar pares: função que copia somente os valores pares contidos na matriz para o vetor, ambos passados 
como parâmetro, e retorna a quantidade de números pares para o main.

- Impressão do vetor: função que recebe o vetor e a quantidade de pares como parâmetro e faz a impressão do vetor.

Todas as funções devem ser chamadas pela função main.*/

#include <stdio.h>

#define C 2
#define L 3
#define TAM 6

void le(int ma[L][C]){
    int l, c;
    printf("Digite os numeros da matriz:\n");    
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            printf("\nElemento [%d][%d]: ", l, c);
            scanf("%d", &ma[l][c]);
        }
    }
    printf("\nMatriz lida!\n");
}

void imprime(int ma[L][C]){
    int l, c;
    printf("\nA matriz que voce digitou eh:\n");
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            printf("%d\t", ma[l][c]);
        }
        printf("\n");
    }
}

int copiaPares(int ma[L][C], int vetor[]){
    int l, c, i=0, contador=0;
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            if(ma[l][c] % 2 == 0){
                vetor[i] = ma[l][c];
                i++;
                contador++;
            }
        }
    }
    return contador;
}

void imprimePares(int vetor[], int contador){
    int i;
    printf("\nNumeros pares:");
    for(i=0; i<contador; i++){
        printf(" %d", vetor[i]);
    }
}

int main(){
    int ma[L][C], vetor[TAM];

    le(ma);
    imprime(ma);
    imprimePares(vetor, copiaPares(ma, vetor));

    return 0;
}
