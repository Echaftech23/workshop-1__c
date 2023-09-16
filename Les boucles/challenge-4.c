#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* challenge-4 : */

int main() {
	
	int som = 0, var, max = 1;
	do{
		printf("Veuillez saisir un nombre entier positive inferieur a 100 : ");
		scanf("%d", &var);
		if(var <= 100){
			som += var;
			while(var > max){
				max = var;
			}
			
		}
	
	}while(var != 0);
	
	printf("La somme des nombres que vous avez taper est : %d\n",som);
	printf("Le nombre maximum est : %d",max);
	
	
	return 0;
}
