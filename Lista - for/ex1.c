/*
Faça um programa que imprime:
? os números de 0 a 20.
? os números de 20 a 0
? os números pares contidos no intervalo de 2 a 20
? os números impares contidos no intervalo de 2 a 20.
? os números do intervalo de 40 a 70, dizendo se é par ou ímpar.
*/

#include <stdio.h>
#define const 2

int main(void) {
	int x, y, par, impar;

	printf("Numeros pares e impares de 40 a 70:");
	for(x=40; x<=70; x++){
		if(x%2==0){
			printf("\n%d - par", x);
		} else{
			printf("\n%d - impar", x);
		}
	}
    
    printf("\n\nNumeros de 0 a 20 e de 20 a 0:");
    for(x=0, y=20; x<=20; x++, y--){
    	printf("\n- %2d\t %2d", x, y);
	}
	
	printf("\n\nNumeros pares 0 a 20:");
	for(x=2; x<=20; x+=2){
		printf("\n%d", x);
	}
	
	printf("\n\nNumeros impares 0 a 20:");
	for(x=3; x<=20; x+=2){
		printf("\n%d", x);
	}
	  
     
    
    return 0;
}
