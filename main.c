#include <stdio.h>
#include <stdlib.h>
//Exercicio 1:
int somatorio(int n)
{
    if(n==1){
        return 1;
        }
    return n + somatorio(n-1);
}
//Exercicio 2:
int crescente(int n, int i){

    if(i>n){
        return n;
        }
        printf("%d\n", i);
        return crescente(n, i+1);
}
//Exercicio 3:
int decrescente(int n){
    if(n==1){
     return 1;
     }
        printf("%d\n", n);
    return decrescente(n-1);
}
//Exercicio 6:
int multi(int x, int y){
    if(x==y){
        return y;
    }
    return x*multi(x+1, y);
}

//Exercicio 7:
int somaSucessiva(int x, int y, int i){
if(i==y){
    return x;
}
return x+somaSucessiva(x, y, i+1);

}


int main()
{
    printf("%d",somaSucessiva(3, 5, 1) );
}

