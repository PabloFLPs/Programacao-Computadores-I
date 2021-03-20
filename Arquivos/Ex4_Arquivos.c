#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[100];
	printf("Digite o nome do arquivo: ");
	fgets(string,99,stdin);

	FILE *file;
	file=fopen(string".txt","r");

	if(!file){
		printf("Nao foi possivel abrir o arquivo! ");
	}
	int cont=0;
	char c=fgetc(file);
	while(!feof(file)){
		if(c=='A'){
			cont++;
		}
		printf("%c",c);
		c=fgetc(file);
	}
	printf("\n\n\n%d",cont);
	fclose(file);
	return 0;
}