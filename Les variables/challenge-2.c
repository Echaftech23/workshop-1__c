#include <stdio.h>
#include <stdlib.h>

/*  challenge-2 : un programme d'affichage de Température  :  */

int main() {
	float C, F;
	
	printf("Veuillez saisir la temperature en Fahrenheit : "); 
	scanf("%f", &F);
	
	C = (F - 32) / 1.8;


	printf("La temperature en degre Celsius est egal : %.2f\n", C);
	if (C < 0){
		printf("Tres froid");
	}
	else if(C >= 0 && C < 10){
		printf("froid");
	}
	else if(C >= 10 && C < 30 ){
		printf("chaud");
	}
	else{
		printf("Tres chaud");
	}

	
	return 0;
}	
