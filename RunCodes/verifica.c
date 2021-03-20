#include <stdio.h>

char verifica(char c){
	int saida=0;
	if(65<=((int)c) && ((int)c)<=90){
		saida=1;
	}
	else if(97<=((int)c) && ((int)c)<=122){
		saida=1;
	}
	return saida;
}

int main(){
	char c;
	printf("Digite um caracter: ");
	scanf(" %c",&c);
	printf("Resultado = %d",verifica(c));
}
