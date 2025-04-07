#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Autor: Eduardo Parize
RA: 25075923
Lista 5
*/
int main(){
// Exercicio 1:
/*
   int i;
    printf("Digite um numero maior que 20:\n");
    scanf("%d", &i);
        if (i>20){
            printf("O numero %d eh maior que 20", i);
}
*/
// Exercicio 2:
/*
    int num1, num2, soma;
    printf("Insira o valor do primeiro numero:\n");
    scanf("%d", &num1);
    printf("Insira o valor do segundo numero:\n");
    scanf("%d", &num2);

    soma = num1+num2;
    if(soma>10){
        printf("O numero %d eh maior que 10!", soma);
    }
*/
// Exercicio 3:
/*
  int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i%2==0){
        printf("O numero eh par");
    } else {
        printf("O numero eh impar");
        }
*/
// Exercicio 4:
/*
    int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i>0){
        printf("O numero eh positivo\n");
    } else if(i==0){
            printf("O numero eh nulo\n");
            }else{
            printf("O numero eh negativo\n");}
*/
// Exercicio 5:
/*    int num1, num2, soma;
    printf("Insira o valor do primeiro numero:\n");
    scanf("%d", &num1);
    printf("Insira o valor do segundo numero:\n");
    scanf("%d", &num2);

    soma = num1+num2;

    if(soma>20){
        printf("%d", soma+8);
    }else{
            printf("%d", soma-5);}
*/
//Exercicio 6:
/*
    float i, raiz, quadrado;

    printf("Insira um numero:\n");
    scanf("%f", &i);
    raiz = sqrt(i);
    quadrado=i*i;
    if(i>=0){
        printf("%.2f", raiz);
    }else{
        printf("%.2f",quadrado);
        }
*/
//Exercicio 7:
/*
    float i, j;
    printf("Insira o valor para o primeiro numero:\n");
    scanf("%f", &i);
    printf("Insira o valor para o segundo numero:\n");
    scanf("%f", &j);

    if(i>j){
        printf("O maior numero eh o : %.2f\n", i);
        printf("O menor numero eh o : %.2f\n", j);
    } else{
            printf("O maior numero eh o : %.2f\n", j);
            printf("O menor numero eh o : %.2f\n", i);
    }
*/
//Exercicio 8:
/*
    int a, b;
    printf("Insira o valor para o primeiro numero:\n");
    scanf("%d", &a);
    printf("Insira o valor para o segundo numero:\n");
    scanf("%d", &b);

    if(a%b==0){
        printf("O numero %d eh divisivel pelo numero %d", a, b);
    } else{
           printf("O numero %d nao eh divisivel pelo numero %d", a, b); }
*/
//Exercicio 9:
/*
    int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i%3==0){
       printf("O numero %d eh multiplo de 3\n", i);
    } else{
            printf("O numero %d nao eh multiplo de 3\n", i);}
*/
//Exercicio 10:
/*
    int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i%5==0){
       printf("O numero %d eh divisivel por 5\n", i);
    } else{
            printf("O numero %d nao eh divisivel por 5\n", i);
    }
    */
//Exercicio 11:
/*
    int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i%7==0 && i%3==0){
       printf("O numero %d eh divisivel por 7 e por 3\n", i);
    } else{
            printf("O numero %d nao eh divisivel por 7 e por 3\n", i);
    }
*/
//Exercicio 12:
/*
    int i;
    printf("Insira um numero:\n");
    scanf("%d", &i);

    if(i%10==0){
        printf("O numero %d eh divisivel por 10\n", i);
    }
    if (i%5==0){
        printf("O numero %d eh divisivel por 5\n", i);
    }
    if (i%2==0){
        printf("O numero %d eh divisivel por 2\n", i);
    }
    if(i%2!=0 && i%5!=0 && i%10!=0){
        printf("O numero %d nao eh divisivel por 10, por 5 nem por 2\n", i);
    }
*/
//Exercicio 13:
/*
    float salario_bruto, prestacao;
    printf("Insira o valor do salario bruto:\n");
    scanf("%f", &salario_bruto);
    printf("Insira o valor da prestacao:\n");
    scanf("%f", &prestacao);

    if(prestacao<=salario_bruto*0.3){
        printf("O emprestimo pode ser concedido\n");
    } else{
        printf("O emprestimo nao pode ser concedido\n");
    }
*/
/*
//Exercicio 14:
    float A, B, C, D, maior_numero, menor_numero;
    printf("Insira o valor do primeiro numero: \n");
    scanf("%f", &A);
    printf("Insira o valor do segundo numero: \n");
    scanf("%f", &B);
    printf("Insira o valor do terceiro numero: \n");
    scanf("%f", &C);
    printf("Insira o valor do quarto numero: \n");
    scanf("%f", &D);
    //Descobrir maior numero
    if(A>B){
        if(A>C){
            if(A>D){
                maior_numero = A;
            }else{
                maior_numero = D;}
        }else if(C>D){
                maior_numero=C;
                    }else{
                    maior_numero=D;}
    }else if(B>C){
            if(B>D){
                maior_numero=B;
            }else{
                maior_numero=D;}
                    } else if(C>D){
                    maior_numero=C;
                        }else{
                            maior_numero=D;}

    //Descobrir menor numero
    if(A<B){
        if(A<C){
            if(A<D){
                menor_numero = A;
            }else{
                menor_numero = D;}
        }else if(C<D){
                menor_numero=C;
                    }else{
                    menor_numero=D;}
    }else if(B<C){
            if(B<D){
                menor_numero=B;
            }else{
                menor_numero=D;}
                    } else if(C<D){
                    menor_numero=C;
                        }else{
                            menor_numero=D;}

printf("O maior numero eh: %.2f\n", maior_numero);
printf("O menor numero eh: %.2f\n", menor_numero);
*/
//Exercicio 15:
    float A, B, C, maior_numero, menor_numero, numero_meio;
    printf("Insira o valor do primeiro numero: \n");
    scanf("%f", &A);
    printf("Insira o valor do segundo numero: \n");
    scanf("%f", &B);
    printf("Insira o valor do terceiro numero: \n");
    scanf("%f", &C);

    if(A>B){
        if(A>C){
            maior_numero=A;
            if(B>C){
                numero_meio=B;
                menor_numero=C;
            }else{
                numero_meio=C;
                menor_numero=B;
            }
        }else{
            maior_numero=C;
            numero_meio=A;
            menor_numero=B;}
    }else if(A>C){
        menor_numero=C;
        numero_meio=A;
        maior_numero=B;
        }else if(C>B){
        menor_numero=A;
        numero_meio=B;
        maior_numero=C;
        }else{
        menor_numero=A;
        numero_meio=C;
        maior_numero=B;
        }
printf("%f %f %f", menor_numero, numero_meio, maior_numero);
    return 0;
}
