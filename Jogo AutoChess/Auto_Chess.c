#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Definindo o numero de personagens e numero de jogadores como costantes.
#define num_personagens 6
#define num_jogadores 2

//Definindo uma estrutura HABILIDADE para as habilidades especiais dos personagens.
typedef struct habilidade{
	char nome[100];
	int bonus_dano_magico,bonus_dano_fisico,bonus_armadura,bonus_resistencia_magica,bonus_vida,custo;
}HABILIDADE;

//Definindo uma estrutura PERSONAGEM para os personagens do jogo.
typedef struct personagem{
	char nome[100];
	char classe[100];
	int vida,dano_fisico,dano_magico,alcance,armadura,resist_magica,furia;
	int posicao[2];
	HABILIDADE habilidade[num_personagens];
}PERSONAGEM;

//Definindo uma estrutura JOGADOR para os dados do jogador.
typedef struct jogador{
	char nome[100];
	//O nivel maximo do jogador e 8.
	int personagens_jogador[8];
	int vida;
	int num_pers_jogador;
	int nivel;
}JOGADOR;

//Funcao de criaçao dos personagens.
void preencher_personagens(PERSONAGEM personagem[]){
	for(int i=0;i<num_personagens;i++){
		switch(i){
			//Criando os Tanques:
			//Criando Tahm Kench;
			case 0: strcpy(personagem[i].nome,"Tahm Kench");
					strcpy(personagem[i].classe,"Tanque");
					personagem[i].vida=600;
					personagem[i].dano_fisico=56;
					personagem[i].dano_magico=0;
					//personagem[i].alcance=1;
					personagem[i].armadura=47;
					personagem[i].resist_magica=32;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Pele Grossa");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						personagem[i].habilidade[i].bonus_dano_fisico=0;
						personagem[i].habilidade[i].bonus_armadura=0;
						personagem[i].habilidade[i].bonus_resistencia_magica=0;
						personagem[i].habilidade[i].bonus_vida=personagem[i].vida*0.5;
						personagem[i].habilidade[i].custo=100;

			//Criando Malphite;
			case 1: strcpy(personagem[i].nome,"Malphite");
					strcpy(personagem[i].classe,"Tanque");
					personagem[i].vida=574;
					personagem[i].dano_fisico=62;
					personagem[i].dano_magico=0;
					//personagem[i].alcance=1;
					personagem[i].armadura=37;
					personagem[i].resist_magica=32;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Escudo de Granito");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						personagem[i].habilidade[i].bonus_dano_fisico=0;
						personagem[i].habilidade[i].bonus_armadura=personagem[i].armadura*0.1;
						personagem[i].habilidade[i].bonus_resistencia_magica=0;
						personagem[i].habilidade[i].bonus_vida=0;
						personagem[i].habilidade[i].custo=100;

			//Criando Galio;
			case 2: strcpy(personagem[i].nome,"Galio");
					strcpy(personagem[i].classe,"Tanque");
					personagem[i].vida=562;
					personagem[i].dano_fisico=0;
					personagem[i].dano_magico=59;
					//personagem[i].alcance=1;
					personagem[i].armadura=24;
					personagem[i].resist_magica=32;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Escudo de Durand");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						personagem[i].habilidade[i].bonus_dano_fisico=0;
						personagem[i].habilidade[i].bonus_armadura=0;
						personagem[i].habilidade[i].bonus_resistencia_magica=personagem[i].resist_magica*0.2;
						personagem[i].habilidade[i].bonus_vida=0;
						personagem[i].habilidade[i].custo=100;

			//Criando os ADC's (a vida deles foi multiplicada por 0.6 e dano dividido pelo mesmo valor).
			//Criando Miss Fortune;
			case 3: strcpy(personagem[i].nome,"Miss Fortune");
					strcpy(personagem[i].classe,"Carry");
					personagem[i].vida=324;
					personagem[i].dano_fisico=83;
					personagem[i].dano_magico=0;
					//personagem[i].alcance=1;
					personagem[i].armadura=28;
					personagem[i].resist_magica=30;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Metendo Bala");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						personagem[i].habilidade[i].bonus_dano_fisico=personagem[i].dano_fisico*0.4;
						personagem[i].habilidade[i].bonus_armadura=0;
						personagem[i].habilidade[i].bonus_resistencia_magica=0;
						personagem[i].habilidade[i].bonus_vida=0;
						personagem[i].habilidade[i].custo=100;

			//Criando Caitlyn;
			case 4: strcpy(personagem[i].nome,"Caitlyn");
					strcpy(personagem[i].classe,"Carry");
					personagem[i].vida=288;
					personagem[i].dano_fisico=100;
					personagem[i].dano_magico=0;
					//personagem[i].alcance=1;
					personagem[i].armadura=28;
					personagem[i].resist_magica=30;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Bem na Mira");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						personagem[i].habilidade[i].bonus_dano_fisico=personagem[i].dano_fisico*0.6;
						personagem[i].habilidade[i].bonus_armadura=0;
						personagem[i].habilidade[i].bonus_resistencia_magica=0;
						personagem[i].habilidade[i].bonus_vida=0;
						personagem[i].habilidade[i].custo=100;

			//Criando Tristana;
			case 5: strcpy(personagem[i].nome,"Tristana");
					strcpy(personagem[i].classe,"Carry");
					personagem[i].vida=335;
					personagem[i].dano_fisico=101;
					personagem[i].dano_magico=0;
					//personagem[i].alcance=1;
					personagem[i].armadura=26;
					personagem[i].resist_magica=30;
					personagem[i].furia=0;
					personagem[i].posicao[1]=0;
					personagem[i].posicao[2]=0;
						strcpy(personagem[i].habilidade[i].nome,"Tiro Destruidor");
						personagem[i].habilidade[i].bonus_dano_magico=0;
						//A habilidade da Tristana e aplicada instantaneamente para apenas o proximo ataque basico.
						personagem[i].habilidade[i].bonus_dano_fisico=personagem[i].dano_fisico*1.4;
						personagem[i].habilidade[i].bonus_armadura=personagem[i].armadura*0.1;
						personagem[i].habilidade[i].bonus_resistencia_magica=0;
						personagem[i].habilidade[i].bonus_vida=0;
						personagem[i].habilidade[i].custo=100;
		}
	}
}

void criacao_jogador(JOGADOR jogador[],int num_pers_jogadores){
		//Criando um "for" para obter os dados dos jogadores.
		for(int i=0;i<num_jogadores;i++){
			printf("Digite o nome do jogador %d: ",i+1);
			fgets(jogador[i].nome,99,stdin);
			jogador[i].vida=100;
			jogador[i].num_pers_jogadores=1;
			jogador[i].nivel=1;
		}
}

void criacao_mapa(){
	
}

void batalha(){
	
}

int main(){
	//Variavel "sair" para armazenar o estado de saida para o loop do jogo.
	int sair=0;
	//Variavel p salvar a palavra [sair] digitada pelo jogador para sair do jogo.
	char entrada_jogador[100];
	do{
		//Criando um vetor "personagem" para tds os personagens.
		PERSONAGEM personagem[num_personagens];
		//Funcao de criaçao dos personagens.
		preencher_personagens(personagem);
		//Criando um vetor "jogador" para os jogadores.
		JOGADOR jogador[num_jogadores];
		//Funcao de criaçcao dos jogadores.
		criacao_jogador(jogador);
		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//Iniciando o sistema de jogo:
		//Mostrando os personagens iniciais aleatorios.
		int personagens_iniciais[2];
		srand(time(NULL)); //Iniciando a "seed" do sistema de randomization.
		printf("Seus personagens iniciais sao: \n");
		for(int i=0;i<num_personagens;i++){
			personagens_iniciais[i]=rand()%num_personagens;
			printf("** [%d] -> %s\n",i,personagem[i].nome);
		}
		printf("\n");
		//Agr os jogadores escolhem qual personagem ele quer para iniciar.
		printf("Jogador 1, digite o numero do personagem escolhido: ");
		jogador[1].personagens_jogador[1]=scanf("%d",entrada_jogador);
		printf("Jogador 2, digite o numero do personagem escolhido: ");
		jogador[2].personagens_jogador[2]=scanf("%d",entrada_jogador);
		//-------------------------------------------------------------------
		//funçao do sistema de batalha.
		void batalha();




		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//-------------------------------------------------------------------
		//"if" para caso seja digitado [sair], sair do jogo.
		printf("Deseja sair do jogo? ");
		fgets(entrada_jogador,99,stdin);
		if(strcmp(entrada_jogador,"sair")==0){
			sair=1;
		}
	}while(sair!=1);
}
