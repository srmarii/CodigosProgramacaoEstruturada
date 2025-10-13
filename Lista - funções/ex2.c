/*Faça uma função que recebe dois números positivos por parâmetro e retorna a soma dos n números inteiros
existentes entre eles*/

#include <stdio.h>
#include <string.h>

int soma(int n1, int n2){
	int x, soma=0;
	for(x=n1+1; x<n2; x++){
		soma = soma + x;
	}
	return soma;
}


int main(){
	int n1, n2;
	printf("Insira um numero: ");
	scanf(" %i", &n1);
	printf("Insira outro numero: ");
	scanf(" %i", &n2);
	
	printf("\n%i", soma(n1, n2));

	
	
	return 0;
}
