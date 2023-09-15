#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char lettre;

	printf("Veuillez saisir une lettre : "); 
	scanf("%c", &lettre);
	
	switch (lettre){
	  case 'a':
	  case 'e':
	  case 'i':
	  case 'u':
	  case 'y':
	  case 'o':	
	  case 'A':
	  case 'E':
	  case 'I':
	  case 'U':
	  case 'Y':	
	  case 'O':
	    printf("Le caractere %c est un voyelle.", lettre);
	  	break;
	  default :
	    printf("Le caratere %c n'est pas un voyelle.", lettre);
		break;	   	    
	}
	  	
	
	return 0;
}

