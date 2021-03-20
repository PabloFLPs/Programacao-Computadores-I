#include <stdio.h>

int main(){
    /*Vetores gabarito[] e notas[] para seus respectivos nomes*/
    /*Matriz num_alunos[][] p/ as respostas de cada aluno, sendo
    cada linha pertencente a somente um aluno e cada letra nesta
    linha, representa sua resposta na prova*/
    char gabarito[10];char num_alunos[100][10];int notas[100];
    /*Fim da declaraçao de vetores matrizess*/
    
    /*Preenchendo o vetor gabarito[]*/
    printf("Digite o gabarito da prova: ");
    for(int i=0;i<10;i++){
        scanf(" %c",&gabarito[i]);
    }
    /*Fim do prenchimento do vetor gabarito[]*/
    
    /*Recebendo o nmero de alunos a ser avaliados*/
    int alunos_num;
    printf("Digite o numero de alunos: ");
    scanf("%d",&alunos_num);
    /*Fim*/
    
    /*Preenchendo o vetor notas[] com 0's*/
    for(int i=0;i<alunos_num;i++){
        notas[i]=0;
    }
    /*Fim do preenchimento do vetor notas[]*/
    
    /*"for" dentro de "for"; o primeiro para cada
    aluno, e o segundo dentro deste, p/ preencher
    a matriz num_alunos[][] com suas respectivas
    notas*/
    for(int i=0;i<alunos_num;i++){
    /*"i" e o aluno, que tem 10 notas de "a" a "d"*/
        printf("Digite as respostas do aluno %d: ",(i+1));
        for(int j=0;j<10;j++){
        /*"j" e a nota do aluno "i"*/
            scanf(" %c",&num_alunos[i][j]);
            if(gabarito[j]==num_alunos[i][j]){
                notas[i]++;
            }
        }
    }
    /*Fim de "for" dentro de "for"*/
    printf("**********");
    printf("\nResultado:");
    printf("\n**********");
    for(int i=0;i<alunos_num;i++){
        printf("\nAluno %d: %d",(i+1),notas[i]);
    }
}