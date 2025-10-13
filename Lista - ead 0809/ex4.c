/*Faça um programa que leia uma frase (uma string) e, a partir dela, 
gere duas novas strings, uma contendo somente as letras e outra 
contendo todos os outros tipos de caracteres inseridos. 

Crie uma função para a leitura da frase e outra para a geração 
das duas novas strings. 

A impressão das três strings na tela deverá ser feita a partir da 
função main, através da chamada de uma função para impressão. A 
função para impressão deverá receber somente uma string como parâmetro 
e poderá ser usada quantas vezes forem necessárias.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 40

void leFrase(char frase[]){
	printf("Entre com uma frase: ");
	scanf(" %[^\n]", frase);
}

void separaFrase(char frase[], char letras[], char carac[]){
	int tam = strlen(frase), i, l=0, c=0;
	
	for(i=0; i<tam; i++){
		if(isalpha(frase[i])){
			letras[l] = frase[i];
			l++;
		} else{
			carac[c] = frase[i];
			c++;
		}
	}
}

void imprime(char fraseParaImpressao[]){
	printf("\n%s", fraseParaImpressao);
}

int main(){
	char frase[TAM], letras[TAM], carac[TAM];
	
	leFrase(frase);
	separaFrase(frase, letras, carac);
	
	printf("\nFrase original: ");
	imprime(frase);
	
	printf("\n\nLetras da frase: ");
	imprime(letras);
	
	printf("\n\nCaracteres da frase: ");
	imprime(carac);
	
	return 0;
}
