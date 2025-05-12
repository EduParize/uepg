#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Autor: Eduardo Parize
Lista: 9
RA: 25075923
*/
int main()
{
//Exercicio 1:
/*
    int i=0, soma=0;
    do{
        i+=2;
        soma=soma+i;
    }while(i<100);
    printf("a soma dos primeiros 50 numeros pares eh: %d", soma);
*/
//Exercicio 2:
/*
    int i=10;
    do{
        printf("%d\n", i);
        i--;
    }while(i>=0);
    printf("FIM!\n");
*/
//Exercicio 3:
/*
    int i, j=1, soma=0;
    printf("Insira o valor de um inteiro: \n");
    scanf("%d", &i);

    do{
        if(i%j==0){
           soma=soma+j;
        }
        j++;
    }while(j<i);
    printf("A soma eh: %d", soma);
*/
//Exercicio 4:
/*
    int linhas, nmr=1, j=1, cont=0;
    printf("Insira a quantidade de linhas: \n");
    scanf("%d", &linhas);

    do{
        while(cont<=j){
            if(cont==j){
                 printf("\n");
                 cont++;
                }else{
                    printf("%d ", nmr);
                    cont++;
                    nmr++;
                    }
    }
    cont=0;
    j++;
    }while(j<=linhas);
*/
//Exercicio 5:
/*
    int i, dia, mes, ano, preco, quantidade, resultado=0;

    do{
        printf("Insira o numero do pedido: \n");
        scanf("%d", &i);
            if(i==0){
                break;
            }
        printf("Insira o dia do pedido: \n");
        scanf("%d", &dia);
        printf("Insira o mes do pedido: \n");
        scanf("%d", &mes);
        printf("Insira o ano do pedido: \n");
        scanf("%d", &ano);

        printf("Insira o preco do pedido: \n");
        scanf("%d", &preco);
        printf("Insira o quantidade do pedido: \n");
        scanf("%d", &quantidade);
        printf("--------------------------------");

        resultado = resultado+(preco*quantidade);

    }while(1);
    printf("preco total: %d", resultado);
*/
//Exercicio 6:
float peso, peso_total=0,idade=0,idade_total=0;
int estado_civil, pessoas=0, casadas=0, solteiras=0, separadas=0, viuvas=0;
char sexo[2];

do{
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    if(idade==0){
        break;
    }
    printf("Insira o seu peso: \n");
    scanf("%f", &peso);
    fflush(stdin);

    printf("Insira o seu sexo(M/F): \n");
    fgets(sexo, 2, stdin);
    fflush(stdin);

    printf("Insira seu estado civil: \n");
    printf("1- Casado \n");
    printf("2- Solteiro \n");
    printf("3- Separadas \n");
    printf("4- Viuvas \n");
    scanf("%d", &estado_civil);
    switch(estado_civil){
    case 1:
        casadas++;
        break;
    case 2:
        solteiras++;
        break;
    case 3:
        separadas++;
        break;
    case 4:
        viuvas++;
        break;
    }

pessoas++;
idade_total=idade_total+idade;
peso_total=peso_total+peso;
}while(1);

printf("Numero de casados: %d\n", casadas);
printf("Numero de solteiros: %d\n", solteiras);
printf("Numero de separados: %d\n", separadas);
printf("Numero de viuvos: %d\n", viuvas);
printf("Media de idade: %f\n",idade_total/pessoas);
printf("Media de peso: %f\n",peso_total/pessoas);

    return 0;

}
