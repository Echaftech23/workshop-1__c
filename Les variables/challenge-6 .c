#include <stdio.h>
#include <stdlib.h>

/* Challenge 6 : Circonf�rence d'un cercle. */

int main(int argc, char *argv[]) {

	float rayon, circonf;
	const float PI = 3.14;

	printf("Veuillez saisir le rayon de cercle : "); 
	scanf("%f", &rayon);

	circonf = 2 * PI * rayon;

	printf("La circonf�rence du cercle est : %.2f\n", circonf);


	return 0;
}
