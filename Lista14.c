#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Autor: Eduardo Parize
RA: 25075923
Lista: 14
*/
int main() {
//Exercicio 1:
/*
    char x[30];
    int tamanho_string, i;
    printf("Insira uma string para ser invertida: \n");
    fgets (x, 30, stdin);
    tamanho_string=strlen(x);

    for(i=tamanho_string;i>=0;i--){
        printf("%c", x[i]);
    }
*/  
//Exercicio 2:
/*
    char string_original[30], string_invertida[30];
    int tamanho_string, i, j;
    printf("Insira uma string para ser invertida: \n");
    fgets (string_original, 30, stdin);
    fflush(stdin);
    tamanho_string=strlen(string_original);
    j=tamanho_string-1;

    for(i=0;i<=tamanho_string;i++){
        string_invertida[j]=string_original[i];
        j--;

    }
    strcpy(string_original,string_invertida);
    fputs(string_original, stdout);
*/
//Exercicio 3:
/*
char string[30], substituicao;
int numero_vogais=0, comprimento, i;

printf("Insira uma string : \n");
fgets (string, 30, stdin);
fflush(stdin);

printf("Insira um caracter que devera substituir as vogais: \n");
scanf("%c", &substituicao);
comprimento = strlen(string);
for(i=0;i<=comprimento;i++){
    if(string[i]== 'a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
        numero_vogais++;
        string[i]=substituicao;
    }
}
printf("O numero de vogais na string eh: %d\n", numero_vogais);
fputs(string, stdout);
*/
//Exercicio 4:
/*
char string[50];
int i, j, flag=1, comprimento;

printf("Insira uma string: \n");
fgets(string, sizeof(string), stdin);
string[strcspn(string, "\n")] = '\0';

comprimento=strlen(string)-1;

for(i=0;i<comprimento;i++){
    if(string[i]!=string[comprimento]){
        flag=0;
        break;
    }
    comprimento--;
}
if(flag==1){
    printf("A palavra eh um palindromo!");
} else{
    printf("A palavra nao eh um palindromo!");
}
*/
//Exercicio 5:
/*
char string1[50], string2[50], *flag;
int i, j;

printf("Insira a primeira string: \n");
fgets(string1, sizeof(string1), stdin);
string1[strcspn(string1, "\n")] = '\0';

printf("Insira a segunda string: \n");
fgets(string2, sizeof(string2), stdin);
string2[strcspn(string2, "\n")] = '\0';

flag = strstr(string1, string2);

        
 
if(flag){
    printf("A segunda palavra ESTA dentro da primeira");
    }else{
        printf("A segunda palavra NAO esta dentro da primeira");
    }
*/
//Exercicio 6:
char string1[50], string2[50], vezes;
int i, j;

printf("Insira a primeira string: \n");
fgets(string1, sizeof(string1), stdin);
string1[strcspn(string1, "\n")] = '\0';

printf("Insira a segunda string: \n");
fgets(string2, sizeof(string2), stdin);
string2[strcspn(string2, "\n")] = '\0';

for()
strstr(string1, string2);

        
printf("A string %s esta %d vezes escrita dentro da string %s", string2, vezes, string1);
}