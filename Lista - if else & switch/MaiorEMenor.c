#include <stdio.h>
#include <locale.h>
int main(){
  	/*
  	Construa um programa que, dado quatro valores, A, B, C e D, diga qual é o maior e o menor valor
  	*/
  	int valor1, valor2, valor3, valor4, maior=0, menor=0;
  	
  	printf("Insira o primeiro valor: ");
  	scanf("%i", &valor1);
  	printf("Insira o segundo valor: ");
  	scanf("%i", &valor2);
	printf("Insira o terceiro valor: ");
  	scanf("%i", &valor3);
	printf("Insira o quarto valor: ");
	scanf("%i", &valor4);
	  
	maior = valor1;
	menor = valor1;
	
	
	if(valor2> maior){
		maior = valor2;
	}
	if(valor3> maior){
		maior = valor3;
	}
	if(valor4> maior){
		maior = valor4;
	}
	
	if(valor2< menor){
		menor = valor2;
	}
	if(valor3< menor){
		menor = valor3;
	}
	if(valor4< menor){
		menor = valor4;
	}
	
	printf("\nO maior valor é: %i", maior);
	printf("\nO menor valor é: %i", menor);
	
	return 0;
}
