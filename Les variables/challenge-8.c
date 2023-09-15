#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
<<<<<<< HEAD
	
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
	
=======
	float moy, mention;
	printf("Veuillez saisir une moyenne entre 0 et 20 : ");
	scanf(" %f", &moy);
	
	if(moy < 10){
		printf("Recale");
	}
	else if(moy >= 10 && moy < 12){
		printf("Menstion passable");
	}
	else if(moy >= 12 && moy < 14){
		printf("Menstion assez bien");
	}
	else if(moy >= 14 && moy < 16){
		printf("Menstion bien");
	}
	else{
		printf("Mention tres bien");
	}
>>>>>>> 75b7939c8a1b55c3ff55cfcb7625023b802403df
	
	return 0;
}

