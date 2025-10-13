#include <stdio.h>
#include <string.h>

#define L 8
#define C 30


int main(){
	char nomes[L][C];
	int l, c, z=0, linha=0;
	char nome[30], priLetra;
	
	for(l=0; l<L; l++){
		printf("\nInsira o nome do aluno %d: ", l);
		scanf(" %29[^\n]s",&nomes[l]);
	}
	
	printf("\n\nInsira um nome para pesquisar no banco de dados de alunos: ");
	scanf(" %29[^\n]s",&nome);
	
	for(l=0; l<L; l++){
		if(strcmp(nome, nomes[l])== 0){
			z=1;
			linha = l;
		}
	}
	if(z){
		printf("\n\nSim, o nome %s existe no banco de dados na linha %d", nome, linha);
	} else{
		printf("\n\nNao, o nome %s nao existe.", nome);
	}
	
	printf("\n\nInsira a primeira letra para pesquisar no banco de dados de alunos: ");
	scanf(" %c",&priLetra);
	printf("%c", priLetra);
	
	z=0;
	for(l=0; l<L; l++){
		if(priLetra == nomes[l][0]){
			z=1;
			linha = l;
			break;
		}
	}
	
	if(z){
		printf("\n\nSim, existe um(s) nome(s) que inicia com a letra %c no banco de dados a partir da linha %d", priLetra, linha);
	} else{
		printf("\n\nNao, o nome %s nao existe.", nome);
	}
	
	return 0;
}
