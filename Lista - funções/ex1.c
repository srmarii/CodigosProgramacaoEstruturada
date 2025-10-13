#include <stdio.h>
#include <string.h>

/* Escreva uma função que apresente um quadrado sólido de asteriscos cujo lado é especificado no parâmetro
inteiro lado. Por exemplo, se lado é 3, a função exibe:
*/

void criarQuadrado(int tam){
	int l, c;
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			printf("* ");
		}
		printf("\n");
	}
	
}

int main(){
	int lado;
	printf("Insira o tamanho dos lados: ");
	scanf("\n%i",&lado);
	criarQuadrado(lado);
	
	
	return 0;
	
}
