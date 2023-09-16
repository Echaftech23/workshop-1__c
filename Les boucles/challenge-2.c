#include <stdio.h>
#include <stdlib.h>

/* challenge-2 : pyramide d'étoile. */

int main() {
	
	int L, i, j, k;
	printf("Veuillez saisir le nombre de ligne : ");
	scanf("%d", &L);
	
	for(i = 0;i <= L; i++){
		for(j = 0; j <= L-i; j++){
			printf("   ");
		}
		for(k = 1 ; k <= 2*i-1; k++){
			printf(" * ");
		}	
		printf("\n");
	}
	
	return 0;
}
