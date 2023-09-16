#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int Num, octPlace = 1, octDigit, oct =0, origNum = Num;
	

	printf("Veuillez saisir un nombre entier : "); 
	scanf("%d", &Num);
	
	while(Num != 0){
		octDigit = Num % 8;
		oct = oct + octDigit * octPlace;
		octPlace *= 10; 
		Num /= 8;
	}
	
	printf("La valeur equivalence en octal est : %d\n", oct);
	printf("La valeur equivalence en hexadecimale est : %X", Num);
	
	}

	
	return 0;
}

