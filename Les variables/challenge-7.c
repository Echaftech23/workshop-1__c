#include <stdio.h>
#include <stdlib.h>

/* Challenge 7 : Nombre entier à trois chiffres en ordre inverse. */

int main(int argc, char *argv[]) {

	int var1, NI, a, b, c;

	printf("Veuillez saisir un nombre entier : "); 
	scanf("%d", &var1);

	// separer var1 en 3 chiffre :
	a = var1 / 100;
	b = (var1 % 100) / 10;
	c = (var1 % 100) % 10;

	// Inverse de nombre :
	NI = a + b*10 + c*100; 


	printf("L'inverse est : %03d\n", NI);


	return 0;
}
