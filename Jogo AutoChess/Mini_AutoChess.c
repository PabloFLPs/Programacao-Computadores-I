#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Defining the number of players and characters:
#define num_players 2
#define num_characters 2

//Defining a struct for the Players:
typedef struct{
	char name[50];
	int num_victories;
}PLAYERS;

//Defining a struct for the KICK beat:
typedef struct{
	int damage;
	int fury_bonus;
}KICK;

//Defining a struct for the PUNCH beat:
typedef struct{
	int damage;
	int fury_bonus;
}PUNCH;

//Defining a struct for Special Ability:
typedef struct{
	char name[50];
	int damage;
	KICK kick;
	PUNCH punch;
}HABILIDADE;

//Defining a struct for the Characters:
typedef struct{
	char name[50];
	char class[50];
	int health_points;
	HABILIDADES habilidades[num_characters];
}CHARACTERS;

//Filling the array of Players:
void filling_players(PLAYERS players[],int num_players){
	for(int i=0;i<num_players;i++){
		printf("Jogador %d, digite seu nome: ",i+1);
		fgets(players[i].name,49,stdin);
		players[i].num_victories=0;
	}
}

//Filling the array of the Characters:
void filling_personagens(CHARACTERS characters[],int num_characters){
	for(int i=0;i<num_characters;i++){
		switch(i){
			case 1:
				//First character.
				//Boxer:
				strcpy(characters[i].name,"Boxer");
				strcpy(characters[i].class."Fighter");
				characters[i].health_points=1000;
					strcpy(characters[i].habilidades[i].name,"Martial Arts");
					characters[i].habilidades[i].dano=100;
					characters[i].habilidades[i].kick.damage=20;
					characters[i].habilidades[i].kick.fury_bonus=50;
					characters[i].habilidades[i].punch.damage=15;
					characters[i].habilidades[i].punch.fury_bonus=70;

			case 2:
				//Second character.
				//Sword Master:
				strcpy(characters[i].name,"Sword Master");
				strcpy(characters[i].class."Swordman");
				characters[i].health_points=800;
					strcpy(characters[i].habilidades[i].name,"Judment Cut");
					characters[i].habilidades[i].dano=250;
					characters[i].habilidades[i].kick.damage=20;
					characters[i].habilidades[i].kick.fury_bonus=50;
					characters[i].habilidades[i].punch.damage=15;
					characters[i].habilidades[i].punch.fury_bonus=70;
		}
	}
}

//Function for the Battle System:
void battle_system(){
	
}

int main(){
	PLAYERS players[num_players];
	filling_players(players,num_players);
	filling_personagens(characters,num_characters);

	//Inicializing the Battle System:
	battle_system();
}