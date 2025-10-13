#include <stdio.h>

struct dados{
    char candidato[50], chapa[50];
    int votos;
    float percentual;
};

void leDados(struct dados *leitura){
    printf("\nNome do candidato: ");
    scanf(" %[^\n]s", &leitura->candidato);

    printf("\nNome da Chapa: ");
    scanf(" %[^\n]s", &leitura->chapa);

    printf("\nNumero de votos: ");
    scanf("%i", &leitura->votos);


}


void calculaPercentual(struct dados *c, int totalVotos){
    c->percentual = (float)(c->votos) / (float)totalVotos * 100.00;
}

void imprimeDados(struct dados *c){
    printf("\nNome: ");
    puts(c->candidato);

    printf("\nChapa: ");
    puts(c->chapa);

    printf("\nPercentual de votos: %0.2f%%", c->percentual);
    
}


int main(){
    struct dados c1, c2, c3;
    int totalVotos;

    printf("\n=====================1");
    leDados(&c1);

    printf("\n=====================2");
    leDados(&c2);

    printf("\n=====================3");
    leDados(&c3);

    totalVotos = (c1.votos) + (c2.votos) + (c3.votos);

    calculaPercentual(&c1, totalVotos);
    calculaPercentual(&c2, totalVotos);
    calculaPercentual(&c3, totalVotos);

    printf("\n==================================================================");
    printf("\n\nTotal de votos desta eleição: %i", totalVotos);

    printf("\n\n=====================Candidato 1:");
    imprimeDados(&c1); 

    printf("\n\n=====================Candidato 2:");
    imprimeDados(&c2); 
    
    printf("\n\n=====================Candidato 3:");
    imprimeDados(&c3); 

    return 0;
}