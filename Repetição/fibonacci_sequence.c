#include <stdio.h>

int main(){
    int vetor[1000],tam=0,n_numeros;
    printf("Digite n (sendo este maior que 0): ");
    do{
        scanf("%d",&n_numeros);
        if(n_numeros<=0){
            printf("Digite um valor válido!");
        }
    }while(n_numeros<=0);
    int F=1;
    vetor[0]=1;
    printf("%d ",vetor[0]);
    for(int i=1;i<=n_numeros;i++){
        if(i==1){
            F=F+(i-1);
        }
        else{
            F=vetor[i-2]+vetor[i-1];
        }
        vetor[i]=F;
        printf("%d ",vetor[i]);
    }
}