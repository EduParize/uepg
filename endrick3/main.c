#include <stdio.h>
#include <stdlib.h>

int main()
{
    tabela();
}
//Exercicio 1:
void parimpar(){
    int i;
printf("Insira um valor: \n");
scanf("%d", &i);

if(i%2==0){
    printf("O valor %d eh par", i);
}else{
printf("O valor %d eh impar", i);
}
}
//Exercicio 2:
void numeromes(){
   int i;
printf("Insira um valor: \n");
scanf("%d", &i);

switch(i){
    case 1:
        printf("Janeiro!\n");
        printf("dias: 31 ");
    break;
    case 2:
         printf("Fevereiro!\n");
        printf("dias: 29 ou 28");
    break;
    case 3:
         printf("Marco!\n");
        printf("dias: 31 ");
    break;
    case 4:
         printf("Abril!\n");
        printf("dias: 30 ");
    break;
    case 5:
         printf("Maio!\n");
        printf("dias: 31");
    break;
    case 6:
         printf("Junho!\n");
        printf("dias: 30");
    break;
    case 7:
         printf("Julho!\n");
        printf("dias: 31");
    break;
    case 8:
         printf("Agosto!\n");
        printf("dias: 31");
    break;
    case 9:
         printf("Setembro!\n");
        printf("dias: 30");
    break;
    case 10:
         printf("Outubro!\n");
        printf("dias: 31");
    break;
    case 11:
         printf("Novembro!\n");
        printf("dias: 30");
    break;
    case 12:
         printf("Dezembro!\n");
        printf("dias: 31");
    break;
    }
}
//Exercicio 3
void piramide(){
    int num, i, j;
    printf("Insira um valor: \n");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
//Exercicio 4:
void retangulo(){
int i, j,k, linhas, colunas;
    printf("Insira um valor para as linhas: \n");
    scanf("%d", &linhas);
     printf("Insira um valor para as colunas: \n");
    scanf("%d", &colunas);
    printf("+");
    for(i=0;i<colunas;i++){
        printf("-");
    }
    printf("+");
    printf("\n");
    for(j=0;j<linhas;j++){
        printf("|");
        for(k=0;k<colunas;k++){

            printf("\ ");
        }
        printf("|");
        printf("\n");
    }
    printf("+");
     for(i=0;i<colunas;i++){
        printf("-");
    }
    printf("+");
}
//Exercicio 5:
void coordenadas(){
int i;
typedef struct coordenadas{
    int X;
    int Y;
} coordenadas;
coordenadas pontos[4];
for(i=0; i<4;i++){
printf("Insira o valor do ponto X do ponto %d:\n", i+1);
scanf("%d", &pontos[i].X);
printf("Insira o valor do ponto Y do ponto %d:\n", i+1);
scanf("%d", &pontos[i].Y);
}

float perimetro = (pontos[1].X-pontos[0].X)*2+(pontos[1].Y-pontos[2].Y)*2;
printf("%f", perimetro);
}
//Exercicio 6:

void segundos(){
int segundos, horas, minutos, segundos_finais;
printf("Insira a quantidade de segundos: \n");
scanf("%d", &segundos);

horas=segundos/3600;
minutos= (segundos%3600)/60;
segundos_finais =(segundos%3600)%60;

printf("horas: %d\n", horas);
printf("minutos :%d\n", minutos);
printf("segundos :%d\n", segundos_finais);
}

//Exercicio 7:
 void tabela(){
 int i, j;

 for(i=1;i<10;i++){
    for(j=1;j<=i;j++){
        printf("%d ", i*j);
    }
    printf("\n");
 }

 }

 //Exercicio 8:

 void triangulo(){
 int i, altura;
 printf("Insira a altura do triangulo: \n");
 scanf("%d", &altura);

 for(i=0;)

 }
