#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int var;

	printf("Veuillez saisir un nombre entier : "); 
	scanf("%d", &var);
	
	if(var % 2 == 0){
		printf("%d est paire", var);
	}
	else
		printf("%d est Impaire", var);
	
	
	return 0;
}

