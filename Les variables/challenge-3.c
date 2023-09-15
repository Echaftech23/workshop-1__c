#include <stdio.h>
#include <stdlib.h>

/*Challenge 3 : Calcule et affichage résultat en format décimal. */

int main(int argc, char *argv[]) {

	int a, b;

	printf("Veuillez saisir la valeur de a et b : "); 
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	if(b != 0){
		printf("a / b = %d\n", a/b);
		printf("a %% b = %d\n", a % b);
	}

	else	
	    printf("impossible de diviser sur 0");


	return 0;
}
