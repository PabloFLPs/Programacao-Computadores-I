#include <stdio.h>

int verifica(char c){
    int caractere=(int)c,saida=0;
    if (65<=caractere && caractere<=90){
        saida=1;
    }
    else if(97<=caractere && caractere<=122){
        saida=1;
    }
    return saida;
}

int main(){
    char c;
    printf("Digite o caracter: ");
    scanf(" %c",&c);
    if(verifica(c)==1){
        printf("\nO caracter e uma letra!");
    }
    else if(verifica(c)==0){
        printf("\nO caracter nao e uma letra!");
    }
}