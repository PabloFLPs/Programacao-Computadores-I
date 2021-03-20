#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *file;
	file=fopen("arquivo.txt","w");
	if(!file){
		printf("Nao foi possivel abrir o arquivo! ");
		return 0;
	}
	printf("Digite um caracter: ");
	char string[100];
	fgets(string,99,stdin);
	for(int i=0;i<strlen(string),i++){
		fputc(string[i],file);
	}
	fclose(file);
	return 0;
}