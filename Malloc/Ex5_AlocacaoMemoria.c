#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Digite o valor de n: ");
	scanf("%d",&n);

	int *ptr;
	ptr=(int*)malloc(sizeof(int)*n);

	printf("Digite os valores para o vetor de posicoes: ");
	for(int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n;i++){
		printf("Posiçao %d: %d\n",i+1,*(ptr+i));
	}
	free(ptr);
}