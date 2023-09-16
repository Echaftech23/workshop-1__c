#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* challenge-5 : un programme C qui lit un entier et l'affiche inversée. */

int main() {
	
	int num, origNum, origNum1, j= 0, digitPlace, mod, numInv;
	printf("Veuillez saisir un nombre entier : ");
	scanf("%d", &num);
	origNum = origNum1 = num;
	while(num % 10 != 0){
		num /= 10;
		j++;
	}
	while(origNum != 0){
		mod = origNum % 10;
		digitPlace = pow(10, j-1);
		numInv += mod * digitPlace; 
		origNum /= 10;
		j--;
	}
	printf("L'inverse de %d est : %d", origNum1, numInv);
	
	
	return 0;
}
