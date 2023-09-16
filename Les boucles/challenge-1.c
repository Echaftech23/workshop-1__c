#include <stdio.h>
#include <stdlib.h>

/* challenge-1 : un programme  qui affiche la table de multiplication d'un nombre de 1 à 10. */

int main() {
	
	int x, i;
	printf("Veuillez saisir un nombre : ");
	scanf("%d", &x);
	
	for(i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", i, x, x*i);
	}
	
	return 0;
}
