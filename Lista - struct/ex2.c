#include <stdio.h>
#define TAM 10

struct dados{
    char nome[50], professor[50], situ;
    float carga, nota1, nota2, exame, notafinal;
    int semestre;
};

void inserir(struct dados dis[], int i){
    printf("\nInsira o nome da disciplina OU escreva 'FIM' para sair: ");
    scanf(" %[^\n]s", &dis[i]->nome);

    printf("\nInsira a carga horaria da disciplina: ");
    scanf("%f", &dis[1]->carga);

    printf("\nInsira o seu semestre atual: ");
    scanf("%i", &dis[1]->semestre);

    printf("\nInsira a situação do aluno nesta disciplina (C para cursando, A para aprovado, R para reprovado e P para pendente): ");
    scanf("%c", &dis[i]->situ);

}

int buscarPorNome(char nome[], struct dados disc[]){
    int i, aux=0;
    for(i=0; i<TAM; i++){
        if(strcmp(nome, disc[i].nome) == 0){
            aux = i;
        }
    }
    if(aux != 0){
        return aux;
    } else{
        return -1;
    }
}


int main(){
    int i =0, j, op, aux, posicao=0;
    struct dados disc[TAM];
    for(j=0; j<TAM; j++){
        strcpy(disc[j].nome, "#");
    }

    do{
        printf("\n1 = Inserir disciplina");
        printf("\n2 = Cadastrar professor");
        printf("\n3 = Cadastrar notas");
        printf("\n4 = Consolidar disciplinas");
        printf("\n5 = Exibir disciplina");
        printf("\n6 = Listar todas disciplinas");
        printf("\n7 = Listar disciplinas pendentes");
        printf("\nQualquer outro numero = Sair");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            int a;
            for(a=0; a<TAM; a++){
                if(strcmp(disc[i].nome, "#") == 0)
                inserir(disc[i], i);
                break;
            }
            printf("\nNão há mais como cadastrar discplinas!");
            break;
        
        case 2: 
            printf("\nDigite o nome da disciplina: ");
            char nome[TAM];
            scanf(" %[^\n]s", &nome);

            int m;

            for(m=0; m<TAM; m++){
                aux = buscarPorNome(nome, disc);
                if(aux>0){
                    posicao = aux;
                }
            }
            if(posicao!=0){
                
            } else{
                printf("\nDisciplina inexistente!");
                break;
            }
            break;
        
        
        default:
            printf("\nSaindo...");
        }

    }while(op>7);

    return 0;
}