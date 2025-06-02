#include <stdio.h>
#include <stdlib.h>
/*
Autor: Eduardo Parize
RA: 25075923
Lista: 12
*/
int main()
{
//Exercicio 1
/*
    int i, j, mat[3][3], menorValor;
    printf("Insira o valor para a posicao 1 1 da matriz:\n");
    scanf("%d", &mat[0][0]);

    menorValor = mat[0][0];

    for(i=0;i<1;i++){
        for(j=1;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]<menorValor){
        menorValor = mat[i][j];
    }
    }
    }
    for(i=1;i<3;i++){
        for(j=0;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]<menorValor){
        menorValor = mat[i][j];
    }
    }
    }
    printf("o menor valor eh: %d\n", menorValor);
*/
//Exercicio 2:
/*
int i, j, mat[4][4], maiorValor, linha, coluna;
    printf("Insira o valor para a posicao 1 1 da matriz:\n",i+1, j+1);
    scanf("%d", &mat[0][0]);

    maiorValor = mat[0][0];
    linha = 1;
    coluna = 1;

    for(i=0;i<1;i++){
        for(j=1;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]>maiorValor){
        maiorValor = mat[i][j];
        linha = i+1;
        coluna = j+1;
    }
    }
    }
    for(i=1;i<4;i++){
        for(j=0;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]>maiorValor){
        maiorValor = mat[i][j];
        linha = i+1;
        coluna = j+1;
    }
    }
    }
    printf("o maior valor eh: %d\n", maiorValor);
    printf("linha: %d\n", linha);
    printf("coluna: %d\n", coluna);
    */
//Exercicio 3:
/*
    int mat[5][5], i, j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                mat[i][j]=1;
            }else{
            mat[i][j]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
         printf("%d ", mat[i][j]);
        }
        printf("\n");
        }
*/
//Exercicio 4:
/*
int i, j, mat[4][4], maior10=0;
    printf("Insira o valor para a posicao 1 1 da matriz:\n",i+1, j+1);
    scanf("%d", &mat[0][0]);
    if(mat[i][j]>10){
        maior10++;
        }

    for(i=0;i<1;i++){
        for(j=1;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]>10){
        maior10++;
    }
    }
    }
    for(i=1;i<4;i++){
        for(j=0;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]>10){
        maior10++;
    }
    }
    }
    printf("numeros maiores que 10: %d\n", maior10);
*/
//Exercicio 5:
/*
int i, j, mat[4][4], negativos=0;
    printf("Insira o valor para a posicao 1 1 da matriz:\n",i+1, j+1);
    scanf("%d", &mat[0][0]);
    if(mat[i][j]<0){
        negativos++;
        }

    for(i=0;i<1;i++){
        for(j=1;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]<0){
        negativos++;
    }
    }
    }
    for(i=1;i<4;i++){
        for(j=0;j<4;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);

    if(mat[i][j]<0){
        negativos++;
    }
    }
    }
    printf("numeros negativos: %d\n",negativos);
*/
//Exercicio 6:
/*
 int i, j, mat[3][3], soma=0;
    printf("Insira o valor para a posicao 1 1 da matriz:\n");
    scanf("%d", &mat[0][0]);


    for(i=0;i<1;i++){
        for(j=1;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);
    }
    }
    for(i=1;i<3;i++){
        for(j=0;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);
    }
    }
    soma = mat[0][0]+ mat[1][1]+ mat[2][2];
    printf("A soma dos valores da diagonal principal eh: %d\n", soma);
    */
//Exercicio 7:
/*
int i, j, mat[3][3], soma=0;
    printf("Insira o valor para a posicao 1 1 da matriz:\n");
    scanf("%d", &mat[0][0]);


    for(i=0;i<1;i++){
        for(j=1;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);
    }
    }
    for(i=1;i<3;i++){
        for(j=0;j<3;j++){
    printf("Insira o valor para a posicao %d %d da matriz:\n",i+1, j+1);
    scanf("%d", &mat[i][j]);
    }
    }
    soma = mat[0][2]+ mat[1][1]+ mat[2][0];
    printf("A soma dos valores da diagonal principal eh: %d\n", soma);
    */
//Exercicio 8:

    int A[10][10], i, j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i<j){
                A[i][j] = 2*i+ 7*j-2;
            }
             if(i==j){
                A[i][j]= 3*i*i-1;
            }
            if(i>j){
                A[i][j]=4*i*i*i+5*j*j+1;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
         printf("%d ", A[i][j]);
        }
        printf("\n");
        }

    return 0;
}
