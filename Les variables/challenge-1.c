#include <stdio.h>
#include <stdlib.h>

/* challenge-1 : un programme  qui  permettre d'afficher vos informations personnelles :  */

int main() {
	char nom[20], prenom[20], sexe[20];
	int tel, age;
	printf("Veuillez saisir votre nom : ");
	scanf("%s", nom);
	
	printf("Veuillez saisir votre prenom : ");
	scanf(" %s", prenom);
	
	printf("Veuillez saisir votre sexe : ");
	scanf(" %s", sexe);
	
	printf("Veuillez saisir votre age : ");
	scanf("%d", &age);
	
	printf("Veuillez saisir votre numero de telephone : ");
	scanf("%d", &tel);
	
    printf("Bonjour %s %s vous avez %d ans votre sexe est %s votre numero de telephone est %d : ", prenom, nom, age, sexe, tel);

	
	return 0;
}
