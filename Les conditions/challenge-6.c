#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Veuillez saisir la valeur de x et y : ");
    scanf("%d", &x);

    if(x > 0){
    	printf("La variable est positif");
	}
	else if(x < 0){
		printf("La variable est negatif");
	}
	else
	    printf("La variable est egal a 0");

    

    return 0;
}

