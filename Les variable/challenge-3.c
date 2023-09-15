#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b , som;

	printf("Veuillez saisir la valeur de a et b : "); 
	scanf("%d %d", &a, &b);
	
	
<<<<<<< HEAD
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	
	if(b != 0){
		printf("a / b = %d\n", a/b);
		printf("a %% b = %d\n", a % b);
	}
		
	else	
	    printf("Impossible de diviser sur 0");
	    
=======
	som = a + b;
	if(a == b)
	   som *= 3;
	printf("a + b = %d", som);
>>>>>>> 75b7939c8a1b55c3ff55cfcb7625023b802403df
	
	return 0;
}

