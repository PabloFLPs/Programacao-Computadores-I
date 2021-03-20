#include <stdio.h> //Inclui a biblioteca "stdio.h".
int main(){
   int a = 5, b = 7, c; //Declarando 3 variaveis do tipo "inteiro".
   int *p, *q; //Declarando dois ponteiros do tipo "inteiro".
   p = &a; //O ponteiro "p" armazena o endereço de "a".
   q = &b; //O ponteiro "q" armazena o endereço de "b".
   c = *p + *q; //"c" armazena o valor da soma dos VALORES de "a" e "b", e nao seus endereços.
   printf("O resultado e: %d \n", c); //Mostra o resultado da soma.
  
   return 0; //Retorna zero para encerrar o programa.
}