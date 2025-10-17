#include <stdio.h>
#include <string.h>

#define TAM 10

struct dados{
    char nome[50], professor[50];
    float carga, nota1, nota2, exame, notafinal;
    int semestre, situ;
};

void inserir(struct dados disc[]){
    int sair = 0, a;
    for(a=0; a<TAM && sair==0; a++){
        if(strcmp(disc[a].nome, "#") == 0){
            printf("\nInsira o nome da disciplina: ");
            scanf(" %[^\n]s", disc[a].nome);

            printf("\nInsira a carga horaria da disciplina: ");
            scanf("%f", &disc[a].carga);

            printf("\nInsira o seu semestre atual: ");
            scanf("%i", &disc[a].semestre);

            printf("\nInsira a situação do aluno nesta disciplina: \n(1 para cursando, 2 para aprovado, 3 para reprovado e 4 para pendente): ");
            scanf("%i", &disc[a].situ);

            sair=1;
        } 
    }
    if(sair==0){
        printf("\nNão há mais como cadastrar discplinas!");
    }
}

int buscarPorNome(struct dados disc[]){
    int aux=-1, sair=0, a;
    char nome[TAM];

    printf("\nDigite o nome da disciplina: ");
    scanf(" %[^\n]s", nome);

    for(a=0; a<TAM && sair==0; a++){
        if(strcmp(nome, disc[a].nome) == 0){
            aux = a;
            sair=1;
        }
    }    
    if(aux<0){
        printf("\nDisciplina inexistente!");
    }
    return aux;
}

void consolidacao(struct dados disc[]){
    int i;
    for(i=0; i<TAM; i++){
        if(disc[i].situ == 1){
            disc[i].notafinal = (disc[i].nota1 + disc[i].nota2) / 2;
            if(disc[i].notafinal >=7){
                disc[i].situ = 2;
            } else{
                disc[i].situ = 3;
            }
            printf("\n========");
            printf("\nDisciplina = %s", disc[i].nome);
            printf("\nNota 1 = %.2f", disc[i].nota1);
            printf("\nNota 2 = %.2f", disc[i].nota2);
            printf("\nNota final = %.2f", disc[i].notafinal);

            if(disc[i].situ ==2){
                printf("\nSituacao do aluno = APROVADO");
            }else{
                printf("\nSituacao do aluno = REPROVADO");
            }
            printf("\n========");
        } else{
            printf("\nNao ha disciplinas sendo CURSADAS no momento.");
        }
    }
}

void professor(struct dados disc[], int a){
    printf("\nDigite o nome do professor: ");
    scanf(" %[^\n]s", disc[a].professor);
    disc[a].situ = 1;
}

void notas(struct dados disc[], int a){
    printf("\nDigite a nota 1: ");
    scanf(" %f", &disc[a].nota1);
    printf("\nDigite a nota 2: ");
    scanf(" %f", &disc[a].nota2);
}

void exibirDisc(struct dados disc[]){
    int aux = buscarPorNome(disc);
    if(aux>=0){
        printf("\n===========");
        printf("\nNome = %s", disc[aux].nome);
        printf("\nCarga = %.2f", disc[aux].carga);
        printf("\nProfessor = %s", disc[aux].professor);
        printf("\nSemestre = %d", disc[aux].semestre);
        printf("\nSituacao = %d", disc[aux].situ);
        printf("\nNota 1 = %.2f", disc[aux].nota1);
        printf("\nNota 2 = %.2f", disc[aux].nota2);
        printf("\nNota final = %.2f", disc[aux].notafinal);
        printf("\n===========");
    }
}

void exibirTodas(struct dados disc[]){
    int a;
    for(a=0; a<TAM; a++){
        if(strcmp(disc[a].nome, "#") != 0){
            printf("\n===========");
            printf("\nNome = %s", disc[a].nome);
            printf("\nSituacao = %d", disc[a].situ);
            printf("\n===========");
        }
    }
}


void exibirPendentes(struct dados disc[]){
    int a;
    for(a=0; a<TAM; a++){
        if(strcmp(disc[a].nome, "#") != 0 && disc[a].situ == 4){
            printf("\n===========");
            printf("\nNome = %s", disc[a].nome);
            printf("\nSituacao = %d", disc[a].situ);
            printf("\n===========");
        }
    }
}



int main(){
    int a, op, aux;
    struct dados disc[TAM];
    for(a=0; a<TAM; a++){
        strcpy(disc[a].nome, "#");
    }

    int rodando = 1;
    do{
        printf("\n1 = Inserir disciplina");
        printf("\n2 = Cadastrar professor");
        printf("\n3 = Cadastrar notas");
        printf("\n4 = Consolidar disciplinas");
        printf("\n5 = Exibir disciplina");
        printf("\n6 = Listar todas disciplinas");
        printf("\n7 = Listar disciplinas pendentes");
        printf("\nQualquer outro numero = Sair");
        printf("\nSua opção: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            inserir(disc);
            break;

        case 2: 
            aux = buscarPorNome(disc);
            if(aux>=0){
                professor(disc, aux);
            }
            break;

        case 3: 
            aux = buscarPorNome(disc);
            if(aux>=0){
                notas(disc, aux);
            }
            break;

        case 4:
            consolidacao(disc);
            break;

        case 5:
            exibirDisc(disc);
            break;
            
        case 6:
            exibirTodas(disc);
            break;    

        case 7:
            exibirPendentes(disc);
            break;    

        default:
            printf("\nSaindo...");
            rodando = 0;
            break;
        }

   } while(rodando);

    return 0;
}