#include <stdio.h>
#include <string.h>

/* Escreva uma fun��o que apresente um quadrado s�lido de asteriscos cujo lado � especificado no par�metro
inteiro lado. Por exemplo, se lado � 3, a fun��o exibe:
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
