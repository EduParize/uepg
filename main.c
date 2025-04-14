#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
Lista 6.1
Autor: Eduardo Parize
RA: 25075923
*/

int main()
{
//Exercicio 1:
/*
float num1, num2, num3;
int opcao;
float geometrica, ponderada, harmonica, aritmetica;

printf("Insira o valor do primeiro numero: \n");
scanf("%f", &num1);
printf("Insira o valor do segundo numero: \n");
scanf("%f", &num2);
printf("Insira o valor do terceiro numero: \n");
scanf("%f", &num3);

printf("------------\n1- Media geometrica\n2- Media ponderada\n3- Media harmonica\n4- Media aritmetica\n\nEscolha uma opcao:\n------------\n");
scanf("%d", &opcao);

switch(opcao){
case 1:
    geometrica = cbrt(num1*num2*num3);
    printf("%.2f", geometrica);
    break;
case 2:
    ponderada= (num1+2*num2+3*num3)/6;
    printf("%.2f", ponderada);
    break;
case 3:
    harmonica= 1/((1/num1)+(1/num2)+(1/num3));
    printf("%.2f", harmonica);
    break;
case 4:
    aritmetica= (num1+num2+num3)/3;
    printf("%.2f", aritmetica);
    break;
}
*/
//Exercicio 2:
/*
int i;
printf("Insira um numero: \n");
scanf("%d", &i);

switch(i){
case 1:
    printf("Domingo\n");
    break;
case 2:
    printf("Segunda-feira\n");
    break;
case 3:
    printf("Terca-feira\n");
    break;
case 4:
    printf("Quarta-feira\n");
    break;
case 5:
    printf("Quinta-feira\n");
    break;
case 6:
    printf("Sexta-feira\n");
    break;
case 7:
    printf("Sabado\n");
    break;
default:
    printf("Numero invalido");
    break;
}
*/
//Exercicio 3:
/*
int opcao;
float i, j, resultado;
printf("---------------");
printf("Escolha uma opcao:\n");
printf("1- Soma\n");
printf("2- Substracao\n");
printf("3- Multiplicacao\n");
printf("4- Divisao\n");
printf("---------------\n");
scanf("%d", &opcao);

printf("Insira o valor do primeiro numero: \n");
scanf("%f", &i);
printf("Insira o valor do segundo numero: \n");
scanf("%f", &j);

switch(opcao){
case 1:
    resultado= i+j;
    printf("Resultado: %.2f\n", resultado);
    break;
case 2:
    resultado= i-j;
    printf("Resultado: %.2f\n", resultado);
    break;
case 3:
    resultado= i*j;
    printf("Resultado: %.2f\n", resultado);
    break;
case 4:
    resultado= i/j;
    printf("Resultado: %.2f\n", resultado);
    break;
default:
    printf("Insira um numero valido:\n");
    break;
}
*/
//Exercicio 4:
/*
float valor, preco_final;
char estado;

printf("Insira o valor do produto:\n");
scanf("%f", &valor);
fflush(stdin);

printf("------------\n");
printf("MG - m\n");
printf("SP - s\n");
printf("RJ - r\n");
printf("MS - n\n");
printf("------------\n");
printf("Insira estado:\n");
scanf("%c", &estado);

switch(estado){
case 'm':
    preco_final= valor*1.07;
    break;
case 's':
    preco_final= valor*1.12;
    break;
case 'r':
    preco_final= valor*1.15;
    break;
case 'n':
    preco_final= valor*1.08;
    break;
default:
    printf("Erro!\n");
    break;
}
printf("Valor final: %.2f", preco_final);
*/
//Exercicio 5:
/*
int i;
printf("Insira um numero: \n");
scanf("%d", &i);

switch(i){
case 1:
    printf("Janeiro\n");
    break;
case 2:
    printf("Fevereiro\n");
    break;
case 3:
    printf("Marco\n");
    break;
case 4:
    printf("Abril\n");
    break;
case 5:
    printf("Maio\n");
    break;
case 6:
    printf("Junho\n");
    break;
case 7:
    printf("Julho\n");
    break;
case 8:
    printf("Agosto\n");
    break;
case 9:
    printf("Setembro\n");
    break;
case 10:
    printf("Outubro\n");
    break;
case 11:
    printf("Novembro\n");
    break;
case 12:
    printf("Dezembro\n");
    break;
default:
    printf("Numero invalido!\n");
}
*/
}




