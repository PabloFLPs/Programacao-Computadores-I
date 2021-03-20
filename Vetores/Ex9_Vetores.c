#include <stdio.h>

void ord_cresc(int a[]){
    int aux;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

int main(){
    int a[5]={23,-2,356,-76,0};
    printf("O vetor ordenado e: ");
    ord_cresc(a);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}