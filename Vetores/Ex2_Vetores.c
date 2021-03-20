#include <stdio.h>

void function(int vetor1[],int vetor2[],int resultado[]){
    for(int i=0;i<10;i++){
        resultado[i]=vetor1[i]*vetor2[i];
    }
}

int main(){
    int vetor1[10],vetor2[10],resultado[10];
    printf("Digite os 10 primeiros numeros: ");
    for(int i=0;i<10;i++){
        scanf("%d",&vetor1[i]);
    }
    printf("Digite os proximos 10 numeros: ");
    for(int i=0;i<10;i++){
        scanf("%d",&vetor2[i]);
    }
    printf("\nResultado: ");
    function(vetor1,vetor2,resultado);
    for(int i=0;i<10;i++){
        printf("%d ",resultado[i]);
    }
}