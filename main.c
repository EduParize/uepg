#include <stdio.h>
#include <stdlib.h>

/*
Autor: Eduardo Parize
RA: 25075923
Lista: Struct 2
*/
int main()
{
//Exercicio 1:
    /*
    int i;
    typedef struct pessoa{
    int dia,mes,ano;
    char nome[30];
    }pessoa;
    pessoa pessoas[6];
    pessoa mais_nova=pessoas[0];
    pessoa mais_velha=pessoas[0];

    for(i=0;i<6;i++){
    printf("Insira o nome da pessoa %d:\n", i+1);
    fgets(pessoas[i].nome, 30, stdin);
    fflush(stdin);
    printf("Insira o dia de nascimento da pessoa %d:\n", i+1);
    scanf("%d", &pessoas[i].dia );
    fflush(stdin);
    printf("Insira o mes de nascimento da pessoa %d:\n", i+1);
    scanf("%d", &pessoas[i].mes );
    fflush(stdin);
    printf("Insira o ano de nascimento da pessoa %d:\n", i+1);
    scanf("%d", &pessoas[i].ano );
    fflush(stdin);
    if(pessoas[i-1].ano>pessoas[i].ano){
        mais_velha=pessoas[i];
    }
    if(pessoas[i-1].ano<pessoas[i].ano){
        mais_nova=pessoas[i];
    }
}
printf("Nome do mais velho: %s", mais_velha.nome);
printf("Nome do mais novo: %s", mais_nova.nome);
*/
//Exercicio 2:
/*
typedef struct atleta_tipo{
    float altura;
    int idade;
    char nome[30];
} atleta;
atleta atletas[5];
atleta mais_alto, mais_velho;
int i;
for(i=0;i<5;i++){
    printf("Insira o nome do atleta %d:\n", i+1);
    fgets(atletas[i].nome, 30, stdin);
    fflush(stdin);
    printf("Insira a idade do atleta %d:\n", i+1);
    scanf("%d", &atletas[i].idade );
    fflush(stdin);
     if(atletas[i-1].idade<atletas[i].idade){
        mais_velho=atletas[i];
    }


    printf("Insira a altura do atleta %d:\n", i+1);
    scanf("%f", &atletas[i].altura);
     fflush(stdin);
    if(atletas[i-1].altura<atletas[i].altura){
        mais_alto=atletas[i];
    }
    if(i==0){
        mais_alto=atletas[0];
        mais_velho=atletas[0];
    }
}
printf("Nome do mais velho: %s", mais_velho.nome);
printf("Nome do mais alto: %s", mais_alto.nome);
*/
//Exercicio 3:
typedef struct atleta_tipo{
    float altura;
    int idade;
    char nome[30];
} atleta;
atleta atletas[5];
atleta idade1, idade2,idade3,idade4,idade5;
int i;
for(i=0;i<5;i++){
    printf("Insira o nome do atleta %d:\n", i+1);
    fgets(atletas[i].nome, 30, stdin);
    fflush(stdin);
    printf("Insira a idade do atleta %d:\n", i+1);
    scanf("%d", &atletas[i].idade );
    fflush(stdin);


    }
        return 0;
}
