#include <stdio.h>

int pares_func(int vetor[],int pares[]){
    int j=0; //j = qtde_numerosPares
    for(int i=0;i<6;i++){
        if(vetor[i]%2==0){
            pares[j]=vetor[i];
            j++;
        }
    }
    return j;
}

/*int qtde_pares(int vetor[],int pares[]){
    return pares(vetor,pares);
}*/

int impares_func(int vetor[],int impares[]){
    int k=0; //k = qtde_numerosImpares
    for(int i=0;i<6;i++){
        if(vetor[i]%2!=0){
            impares[k]=vetor[i];
            k++;
        }
    }
    return k;
}

/*int qtde_impares(int vetor[],int impares[]){
    return impares(vetor,impares);
}*/

int main(){
    int vetor[6],pares[6],impares[6];
    printf("Digite 6 numeros: ");
    for(int i=0;i<6;i++){
        scanf("%d",&vetor[i]);
    }
    printf("\nQtde de numeros pares e: %d",impares_func(vetor,pares));
    printf("\nOs numeros pares sao: ");
    for(int i=0;i<pares_func(vetor,pares);i++){
        printf("%d ",pares[i]);
    }
    printf("\nQtde de numeros impares e: %d",impares_func(vetor,impares));
    printf("\nOs numeros impares sao: ");
    for(int i=0;i<impares_func(vetor,impares);i++){
        printf("%d ",impares[i]);
    }
}