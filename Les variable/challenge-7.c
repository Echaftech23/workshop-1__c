#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char C;
	printf("Veuillez saisir une Lettre : ");
	scanf(" %c", &C);
	
<<<<<<< HEAD
	int var1, NI, a, b, c;

	printf("Veuillez saisir un nombre entier : "); 
	scanf("%d", &var1);
	
	// separer var1 en 3 chiffre : 234
	a = var1 / 100; // 2
	b = (var1 % 100) / 10; // 3
	c = (var1 % 100) % 10; // 4
	NI = a + b*10 + c*100; 

	printf("L'inverse est : %03d\n", NI);
	printf("%03d", var1);
	
	
=======
	if(C >= 65 && C <= 90){
		printf("La lettre est Majescule.");
	}
	else{
		printf("La lettre est miniscule.");
	}
>>>>>>> 75b7939c8a1b55c3ff55cfcb7625023b802403df
	
	
	return 0;
}

