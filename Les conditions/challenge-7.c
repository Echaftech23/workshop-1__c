#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char C;
	printf("Veuillez saisir une Lettre : ");
	scanf(" %c", &C);
	
	if(C >= 65 && C <= 90){
		printf("La lettre est Majescule.");
	}
	else{
		printf("La lettre est miniscule.");
	}
	
	
	return 0;
}

