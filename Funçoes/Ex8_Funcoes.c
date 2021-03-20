#include <stdio.h>

int fatorial(int num){
    int fatorial=1;
    for(int i=num;i>=1;i--){
        fatorial*=i;
    }
}

int main(){
    int num;
    printf("Digite o numero para o fatorial: ");
    scanf("%d",&num);
    printf("\nSeu fatorial e: %d",fatorial(num));
}