/*Crie uma fun��o que receba como par�metro um valor inteiro e gere como 
sa�da n linhas com pontos de exclama��o, conforme o exemplo abaixo (para n = 5):*/

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
