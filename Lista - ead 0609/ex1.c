/*Crie uma função que receba como parâmetro um valor inteiro e gere como 
saída n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):*/

#include <stdio.h>
#include <string.h>

void soma(int n){
	int i;
	for(i=n; i>0; i--){
		int aux = i;
		while(aux<=n){
			printf("!");
			aux++;	
		}
		printf("\n");
	}
}


int main(){
	int n;
	
	printf("Entre com um numero: ");
	scanf(" %i", &n);
	soma(n);
	
	return 0;
	
}
