#include <stdio.h>
#include <math.h>

int verifica(int vetor[],int i){
    int resultado=0;
    for (int j=1;j<=vetor[i];j++){
        if(vetor[i]%j==0){
            resultado++;
        }
    }
    if(resultado==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int vetor[10],quantidade=0;
    printf("Digite os 10 numeros: ");
    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
        if(verifica(vetor,i)==1){
            quantidade++;
        }
    }
    printf("\nA quantidade de numeros primos e: %d",quantidade);
}