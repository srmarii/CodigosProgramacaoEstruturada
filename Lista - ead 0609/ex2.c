/*Faça uma função que receba 3 números inteiros como parâmetro, 
representando horas, minutos e segundos, e os converta e imprima em segundos.*/

#include <stdio.h>
#include <string.h>

int segundos(int h, int m, int s){
	int soma = (h * 360) + (m * 60) + s;
	return soma;
}


int main(){
	int h, m, s;
	
	printf("Entre com uma hora, um minuto e um segundo: ");
	scanf(" %i", &h);
	scanf(" %i", &m);
	scanf(" %i", &s);
	
	
	printf("A quantidade de segundos eh: %i", segundos(h,m,s));
	
	return 0;
	
}
