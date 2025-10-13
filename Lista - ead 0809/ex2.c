/* Faça um programa que leia uma frase e a imprima na tela substituindo 
todas as letras maiúsculas por minúsculas.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 40

void geraFrase(char frase[]){
	int i, tam = strlen(frase);
	char fraseNova[tam];

	
	for(i=0; i<tam; i++){
		fraseNova[i] = tolower(frase[i]);			
	}
	puts(fraseNova);
}


int main(){
	char frase[TAM];
	
	printf("Entre com uma frase: ");
	geraFrase(fgets(frase, 39, stdin));
	
	return 0;
	
}
