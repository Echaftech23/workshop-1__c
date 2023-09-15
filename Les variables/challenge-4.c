#include <stdio.h>
#include <stdlib.h>

/* Challenge 4 : Moyenne et somme de 4 nombres. */

int main(int argc, char *argv[]) {

	float a, b, c, d, sum, moy;

	printf("Veuillez saisir la valeur des quatre nombres : "); 
	scanf("%f%f%f%f", &a, &b, &c, &d);

	sum = a + b + c + d;
	moy = sum / 4;

	printf("La somme des quatre nombres est : %.2f\n", sum);
	printf("La moyenne des quatre nombres est egal a : %.2f", moy);


	return 0;
}
