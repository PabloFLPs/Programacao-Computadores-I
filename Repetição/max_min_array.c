#include <stdio.h>

int maior(int vetor[],int contador){
    int maior=vetor[0];
    for(int i=0;i<contador;i++){
        if(maior<vetor[i]){
            maior=vetor[i];
        }
    }
    return maior;
}

int menor(int vetor[],int contador){
    int menor=vetor[0];
    for(int i=0;i<contador;i++){
        if(menor>vetor[i] && 0!=vetor[i]){
            menor=vetor[i];
        }
    }
    return menor;
}

int main(){
    int vetor[100],contador=0;
    printf("Digite os numeros: ");
    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
        contador++;
        if(vetor[i]==0){
            contador=i+1;
            break;
        }
        else if(vetor[i]<0){
            printf("Digite um valor valido!");
            i=i-1;
        }
    }
    printf("\nO maior valor e: %d",maior(vetor,contador));
    printf("\nO menor valor e: %d",menor(vetor,contador));
}