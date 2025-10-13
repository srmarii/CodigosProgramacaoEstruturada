/*Fa�a um programa que leia uma frase (uma string) e, a partir dela, 
gere duas novas strings, uma contendo somente as letras e outra 
contendo todos os outros tipos de caracteres inseridos. 

Crie uma fun��o para a leitura da frase e outra para a gera��o 
das duas novas strings. 

A impress�o das tr�s strings na tela dever� ser feita a partir da 
fun��o main, atrav�s da chamada de uma fun��o para impress�o. A 
fun��o para impress�o dever� receber somente uma string como par�metro 
e poder� ser usada quantas vezes forem necess�rias.*/


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
