/*Fa�a um programa que apresenta as seguintes fun��es:

- Leitura da matriz: fun��o que l� valores para a matriz de inteiros recebida como par�metro pela fun��o.

- Impress�o da matriz: fun��o que imprime a matriz passada como par�metro para a fun��o.

- Copiar pares: fun��o que copia somente os valores pares contidos na matriz para o vetor, ambos passados 
como par�metro, e retorna a quantidade de n�meros pares para o main.

- Impress�o do vetor: fun��o que recebe o vetor e a quantidade de pares como par�metro e faz a impress�o do vetor.

Todas as fun��es devem ser chamadas pela fun��o main.*/

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
