#include <stdio.h>

int x_isdigit(char c){
    int saida=0;
    switch(c){
        case '0':saida=1;break;
        case '1':saida=1;break;
        case '2':saida=1;break;
        case '3':saida=1;break;
        case '4':saida=1;break;
        case '5':saida=1;break;
        case '6':saida=1;break;
        case '7':saida=1;break;
        case '8':saida=1;break;
        case '9':saida=1;break;
    }
    return saida;
}

int main(){
    char c;
    printf("Digite o caracter: ");
    scanf(" %c",&c);
    if(x_isdigit(c)==1){
        printf("\nE um digito.");
    }
    else if(x_isdigit(c)==0){
        printf("\nNao e um digito.");
    }
}