#include <stdio.h>
#include <stdlib.h>

int main() {
    int annee;
    int choix;

    printf(" ************* Programme de conversion d'annee ******************\n");

    printf("Entrez une annee  : ");
    scanf("%d", &annee);

    printf("Choisissez un format de conversion :\n");
    printf("1. En mois \n");
    printf("2. En jours\n");
    printf("3. En  heures\n");
    printf("4. En  minutes\n");
    printf("5. En  secondes\n");
    printf("6. Quitter\n");


    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("La covertion en mois est : %d\n", annee * 12);
            break;
        case 2:
            if(annee % 100  == 0 || (annee % 4 == 0 && annee % 100 != 0)){
            	printf("La covertion en jours est : %d\n", annee * 366);
			}
			else{
				printf("La covertion en jours est : %d\n", annee * 365);
			}
            break;
        case 3:
            printf("La covertion en heures est : %d\n", annee * 365 * 24);
            break;
        case 4:
            printf("La covertion en minutes est : %d\n", annee * 365 * 24 * 60);
            break; 
		case 5:
            printf("La covertion en secondes est : %d\n", annee * 365 * 24 * 60 * 60);
            break;	   
        case 6:
            // Quitter le programme
            printf("Au revoir !\n");
            break;
        default:
            printf("Option invalide. Veuillez choisir une option valide.\n");
            break;
    }

    return 0;
}

