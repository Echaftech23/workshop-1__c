#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b , som;

	printf("Veuillez saisir la valeur de a et b : "); 
	scanf("%d %d", &a, &b);
	
	
	som = a + b;
	if(a == b)
	   som *= 3;
	printf("a + b = %d", som);
	
	return 0;
}

