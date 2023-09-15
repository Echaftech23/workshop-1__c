#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float a, b , c , delt, sol1, sol2;

	printf("Veuillez saisir la valeur de a et b et c: "); 
	scanf("%f %f %f", &a, &b, &c);
	
	delt = pow(b,2) - 4 * a * c;
	
	if(delt == 0){
		sol1 = -b / (2 * a);
		printf("L'equation admis un solution reelle unique : X = %.2f", sol1);
	}
	else if(delt > 0){
		sol1 = (-b - sqrt(delt)) / (2 * a);
		sol2 = (-b + sqrt(delt)) / (2 * a);
		printf("L'equation admis deux solutions reelles {X1 = %.2f, X2 = %.2f}", sol1, sol2);
	}
	else
	   printf("Pas de soulution reel.");
	return 0;
}

