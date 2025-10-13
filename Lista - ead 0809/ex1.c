/* Faça um programa que leia uma frase e gere uma segunda frase inserindo um * no lugar dos espaços
em branco. Imprima as duas na tela.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 40

void geraFrase(char frase[]){
	int i, tam = strlen(frase);
	char fraseNova[tam];
	
	for(i=0; i<tam; i++){
		if(isspace(frase[i])){
			fraseNova[i] = '*';
		}else{
			fraseNova[i] = frase[i];
		}
				
	}
	puts(fraseNova);


}


int main(){
	char frase[TAM];
	
	printf("Entre com uma frase: ");
	geraFrase(fgets(frase, 39, stdin));
	
	return 0;
	
}
