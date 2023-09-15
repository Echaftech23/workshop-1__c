#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Challenge 5 : Distance entre deux points. */

int main(int argc, char *argv[]) {

	float Ax, Ay, Bx, By, AB;

	printf("Veuillez saisir les coordonees de de A : "); 
	scanf("%f%f", &Ax, &Ay);

	printf("Veuillez saisir les coordonees de de B : "); 
	scanf("%f%f", &Bx, &By);

	AB = sqrt(pow((Bx - Ax),2) + pow((By - Ay),2));

	printf("La distance entre les deux points A et B est : %.2f\n", AB);


	return 0;
}
