/*Faça uma função que leia um número não determinado de valores
reais positivos e retorna a média aritmética dos mesmos. Ao final, o
programa principal deverá imprimir a quantidade de números lidos e a
média. Utilize passagem de parâmetro por referência para o que for
necessário.*/

#include <stdio.h>

void calMedia(int *quant, float *media){ 
    float num, soma = 0.0;

    *quant=0;
    do{
        printf("\nEntre com um número positivo (ou um negativo para sair): ");
        scanf("%f", &num);
    
        if(num > 0){
            soma = (soma + num);
            (*quant)++;
        }
    } while(num > 0);

   *media = soma / *quant;
}

int main(){
    int quant;
    float media; 
    calMedia(&quant, &media);

    printf("\nQuantidade: %i", quant);
    printf("\nMedia: %f", media);

    return 0;
}