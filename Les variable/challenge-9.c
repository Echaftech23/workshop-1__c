#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char C;
	printf("Veuillez saisir un caractere : ");
	scanf(" %c", &C);
	
	if((C >= 65 && C <= 90) || (C >= 97 && C <= 122)){ // [A-Z] or [a-z]
		printf("Le caractere est un alphabet.\n");
		if(C >= 97 && C <= 122){
			printf("et minuscule.");
		}
		else{
			printf("et majuscule.");
		}
	}
	else{
		printf("Le caractere que vous avez taper n'est pas un alphabet.");
	}
	
	return 0;
}

