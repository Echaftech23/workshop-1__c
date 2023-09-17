#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choix, count=0, j;
char user_add[15];
char user_donn[10][15];

void menu();
void affichage();

int main() {
	char Y;
	printf("=========================================================\n");
	printf("                  Menu d'application                     \n");
	
	menu();

	do{
		switch(choix){
			case 1 :{
				do{
					printf("\nVeuillez saisir votre donnees : ");
					scanf("%s", user_add);
					strcpy(user_donn[count], user_add);
					printf("press Y if you want to add more info : ");
					scanf(" %c",&Y);
					
					count++;
					if(count == 10){
						printf("\n\nmemoire est unsuffisant!! Veuillez suprimer une donnee ou tapez un autre nombre [1-8]: \n\n");
						menu();
					}
					if(Y != 'Y'){
					menu();
					}
				}while(Y == 'Y' && count < 10);	

				break;

			}
			case 2 :{
				affichage();
				menu();
				break;
			}
			default: {
                printf("Choix non valide. Veuillez choisir un nombre entre [1-8].\n");
                menu();
            }
		}
	
	}while(-1);
	return 0;
}

void menu(){
		printf("\n");
		printf("=========================================================\n");
		printf("      [1] ajouter une donnee                             \n");
		printf("      [2] afficher les donnees                           \n");
		printf("      [3] rechercher sur une donnee                      \n");
		printf("      [4] supprimer une donnee                           \n");
		printf("      [5] supprimer les donnees repetes                  \n");
		printf("      [6] genere le wordlist                             \n");
		printf("      [7] genere le wordlist dans un fichier.txt         \n");
		printf("      [8] afficher les donnees de type entier            \n");
		printf("=========================================================\n");
		printf("      Tapez votre choix [1-6] : ");
		scanf("%d", &choix);
		printf("\n=========================================================");
}
void affichage(){
	printf("\nL'ensembles des donnees que vous avez saisi est : \n");
	for(j = 0; j < count ; j++){
		printf("[%d]: %s\t",j+1, user_donn[j]);
	}
}
