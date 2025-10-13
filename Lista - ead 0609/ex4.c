/*Faça uma função que lê uma string e conta quantas vezes dois 
caracteres informados pelo usuário são encontrados juntos. */

#include <stdio.h>
#include <string.h>

char contaString(char frase[], char c1, char c2){
	int i, tam = strlen(frase), cont=0; 
	
	for(i=0; i<tam; i++){
		if(c1 == frase[i] && c2 == frase[i+1]){
			cont++;
		}
	}
	
	return cont;
	
}


int main(){
	char frase[100], c1, c2;
	
	printf("Entre com uma frase e dois caracteres separados por enter: ");
	gets(frase);
	scanf(" %c \n %c", &c1,&c2);
	
	printf("A quantidade de vezes que os caracteres foram encontrados juntos (%c%c) eh: %i", c1, c2, contaString(frase, c1, c2));
	
	return 0;
}
