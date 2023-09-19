#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choix, count=0, j;
char user_add[15];
char user_donn[4][15];

void menu();
void ajouter();
void afficher();
void chercher();
void supprimer();
void supprimerRep();
// void genererWordlist();


int main(){
	printf("=========================================================\n");
	printf("                  Menu d'application                     \n");
	
	// menu();

	do{
		menu();
		switch(choix){
			case 1 :{
				ajouter();
				break;
			}
			case 2 :{
				afficher();
				break;
			}
			case 3 :{
				chercher();
				break;
			}
			case 4 :{
				supprimer();
				break;
			}
			case 5 :{
				supprimerRep();
				break;
			}
			
			default: {
                printf("\nChoix non valide. Veuillez choisir un nombre entre [1-8].\n");
            }
		}
	
	}while(-1);

	return 0;
}

void menu(){
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
		printf("      Tapez votre choix [1-8] : ");
		scanf("%d", &choix);
		printf("=========================================================\n");
}
void afficher(){
	printf("L'ensembles des donnees que vous avez saisi est : \n");
	for(j = 0; j < count ; j++){
		printf("[%d]: %s\t",j+1, user_donn[j]);
	}
	printf("\n");
}
void chercher(){
    int index;
	afficher();
	printf("=========================================================");
	printf("\nVeuillez saisir l'index de donnees : ");
	scanf("%d", &index);
	printf("=========================================================");
	printf("\n[%d]: %s\n", index, user_donn[index-1]);
	
}
void ajouter(){
	char Y;	
	do{
		printf("Veuillez saisir votre donnees : ");
		scanf("%s", user_add);
		if(count < 10){
			strcpy(user_donn[count], user_add);
		}
		else{
			printf("\n\nmemoire est unsuffisant!! Veuillez suprimer une donnee ou tapez un autre nombre [1-8]: \n\n");
			break;
		}
		printf("press Y if you want to add more info : ");
		scanf(" %c",&Y);

		count++;
		if(Y != 'Y'){
			break;
		}
	}while(Y == 'Y' && count < 4);
}
void supprimer(){
    int index;
	printf("Veuillez saisir l'index de donnees que vous voulez suprimer : ");
	scanf("%d", &index);
	if(index > count){
		printf("             Not found ^__^ \n                            ");
	}
	else {
		for(j = 0; j < count; j++){
			if(j == index-1){
				strcpy(user_donn[index-1], user_donn[j+1]);
				//je voudrais j continue a remplaire le tableau derictement apres index j'ausqua la fin :
				while (j+1 < count){
					strcpy(user_donn[j], user_donn[j+1]);
					j++;
				}
				count--;
			}
			
		}
		for( j = 0; j < count; j++){
			printf("[%d]: %s\t",j+1, user_donn[j]);
		}
	    printf("\n");
	}
}
void supprimerRep(){
	int k;
	for(j = 0; j < count; j++){
		for(k = j+1; k < count; k++){
			if(strcmp(user_donn[j] , user_donn[k]) == 0){
				for(k = k; k < count; k++){
					strcpy(user_donn[k], user_donn[k+1]);
        	    }
				count--;
				k = j+1;
			}
		}
	}
	
	for (j = 0; j < count; j++){
		printf("[%d]: %s\t",j+1, user_donn[j]);
	}
	printf("\n");
}
// void genererWordlist();
