#include <stdio.h>

float max(float v[],int n){
    int maior=v[0];
    for(int i=0;i<n;i++){
        if(maior<v[i]){
            maior=v[i];
        }
    }
    return maior;
}

int main(){
    float v[10]={1,2,3,4,5,6,7,8,9,90};
    int n;
    printf("Digite n: ");
    scanf("%d",&n);
    printf("\nO maior numero e: %d",max(v,n));
}