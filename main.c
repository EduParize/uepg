#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Autor: Eduardo Parize
RA: 25075923
LISTA: 10
*/
int main()
{
//Exercicio 1:
/*
    int i, valores[6];
    for(i=0;i<=5;i++){
        printf("Insira o valor para o %d inteiro: \n", i+1);
        scanf("%d", &valores[i]);
    }

    for(i=0;i<=5;i++){
        printf("%d ", valores[i]);
    }
*/
//Exercicio 2:
/*
int i, valores[6];
    for(i=0;i<=5;i++){
        printf("Insira o valor para o %d inteiro: \n", i+1);
        scanf("%d", &valores[i]);
    }

    for(i=5;i>=0;i--){
        printf("%d ", valores[i]);
    }
*/
//Exercicio 3:
/*
int i, valores[5];
float soma=0;
    for(i=0;i<=4;i++){
        printf("Insira o valor para o %d inteiro: \n", i+1);
        scanf("%d", &valores[i]);
        soma= soma+valores[i];

    }

    for(i=0;i<=4;i++){
        printf("%d ", valores[i]);
    }
    printf("\n%.2f", soma/5);
*/
//Exercicio 4:
/*
    int i, A[6]={1,0,5,-2,-5,7};
    int soma1=0;
    soma1 = A[0]+A[1]+A[5];
    printf("soma das posicoes 0, 1 e 5: %d\n",soma1 );

    A[4]=100;

    for(i=0;i<=5;i++){
        printf("%d\n",A[i]);
    }
*/
//Exercicio 6:
/*
int i,pares=0, vet[10];
printf("Insira dez valores: \n");

for(i=0;i<=9;i++){
    scanf("%d", &vet[i]);
    if(vet[i]%2==0){
        pares++;
    }
}
printf("Numero de pares: %d\n", pares);
*/
//Exercicio 7:
/*
int i, X[10], maior, menor;
printf("Insira 10 valores: \n");
scanf("%d", &X[0]);
maior = X[0];

scanf("%d", &X[1]);
if(X[1]>X[0]){
maior = X[1];
menor = X[0];}else{
                maior=X[0];
                menor=X[1];
}

for(i=2;i<=9;i++){
    scanf("%d", &X[i]);
    if(X[i]>maior){
       maior=X[i];
    }
    if(X[i]<menor){
        menor=X[i];
    }
}
printf("Maior: %d\n", maior);
printf("Menor: %d\n", menor);
*/
//Exercicio 8:
/*
float vet[10], soma;
int i, negativos=0;

printf("Insira 10 valores: \n");

for(i=0;i<=9;i++){
    scanf("%f", &vet[i]);
    if(vet[i]<0){
        negativos++;
        }else{
            soma=soma+vet[i];
            }
}
printf("Numero de negativos: %d\n", negativos);
printf("Soma dos positivos: %.2f\n", soma);
*/
//Exercicio 9:
/*
int i, A[10],B[10],C[10];
printf("Insira 10 valores para o array A: \n");
for(i=0;i<=9;i++){
    scanf("%d", &A[i]);
}
printf("Insira 10 valores para o array B: \n");
for(i=0;i<=9;i++){
    scanf("%d", &B[i]);
}

for(i=0;i<=9;i++){
    C[i]=A[i]-B[i];
    printf("%d ", C[i]);
}
*/
//Exercicio 10:
/*
int vet[100],i, nao_multiplos=1;

for(i=0;i<=99;){
        if(nao_multiplos%7==0){
            nao_multiplos++;
            continue;
        }else{
    vet[i]=nao_multiplos;
    i++;
    }
    nao_multiplos++;
}
for(i=0;i<=99;i++){
    printf("%d ", vet[i]);
}
*/
//Exercicio 11:
/*
float A[20], B[20];
int i;

printf("Insira 20 valores para o array A: \n");

for(i=0;i<=19;i++){
    scanf("%f", &A[i]);
    B[i]=sqrt(A[i]);
}
printf("Array A: \n");
for(i=0;i<=19;i++){
    printf("%.2f ", A[i] );
}
printf("\n");
printf("Array B: \n");
for(i=0;i<=19;i++){
    printf("%.2f ", B[i] );
}
*/
    return 0;
}
