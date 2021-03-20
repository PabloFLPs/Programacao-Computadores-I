#include <stdio.h>

int intersecao(int vetor1[],int vetor2[],int inter[]){
    int cont=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vetor1[i]==vetor2[j]){
                inter[i]=vetor2[j];
                cont++;
                break;
            }
        }
    }
    return cont;
}

int main(){
    int vetor1[10],vetor2[10],inter[10];
    /*"Zerando" tds as posiçoes de "intersec[]":
    for(int i=0;i<10;i++){
        intersec[i]=0;
    }
    Fim do "zeramendo"*/
    printf("Digite os 10 primeiros numeros: ");
    for(int i=0;i<10;i++){
        scanf("%d",&vetor1[i]);
    }
    printf("Digite os proximos 10 numeros: ");
    for(int i=0;i<10;i++){
        scanf("%d",&vetor2[i]);
    }
    //intersecao(vetor1,vetor2,intersec);
    printf("O vetor intersecao e: ");
    for(int i=0;i<intersecao(vetor1,vetor2,inter);i++){
        printf("%d ",inter[i]);
    }
}