#include <stdio.h>

void function(int *ptrX,int *ptrY,int *ptrZ){
	int aux;
	if(*ptrX>*ptrY){
		if(*ptrY>*ptrZ){
			aux=ptrZ;
			ptrZ=ptrX;
			ptrX=aux;
		}
	}
	if(*ptrY>*ptrX){
		if(*ptrX>*ptrZ){
			aux=ptrZ;
			ptrZ=ptrY;
			ptrY=aux;
		}
	}
	if(*ptrZ>*ptrX){
		if(*ptrX>*ptrY){
			aux=ptrY;
			ptrY=ptrX;
			ptrX=aux;
		}
	}
}

int main(){
	int x,y,z;
	printf("Digite 3 numeros inteiros: ");
	scanf("%d %d %d",&x,&y,&z);
	function(&x,&y,&z);
	printf("%d %d %d",x,y,z);
}