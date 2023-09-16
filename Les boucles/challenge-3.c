#include <stdio.h>
#include <stdlib.h>

/* challenge-3 : un programme C qui lit un entier puis détermine s'il est premier ou non. */

int main() {
	
	int x, i;
	printf("Veuillez saisir un nombre entier : ");
	scanf("%d", &x);
	
	for(i = 2; i <= x/2 ; i++){
		if(x % i != 0){
			printf("%d est nombre premier.", x);
			break;
		}
		else{
			printf("%d n'est pas premier.");
			break;
		}
	}
	
	return 0;
}
