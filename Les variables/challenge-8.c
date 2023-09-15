#include <stdio.h>
#include <stdlib.h>

/*Challenge 8 : Affichage de la valeur octale et hexadécimale équivalente. */

int main(int argc, char *argv[]) {
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
	
	return 0;
}

