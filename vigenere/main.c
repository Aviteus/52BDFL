#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codeur.h"
#include "decodeur.h"

int main(){
	char messag[]="j aime les patates" ;
	
	
	int k=strlen(messag);
	int i;
	int tableau[k];
	
	for ( i=0;i<k;i++){ 
		tableau[i]=0 ;
	}
	codeur(messag,tableau);     
	printf("%s \n" , messag);
	printf("Arrete! C'est ici l'empire de la mort \n");
	for ( i=0;i<k;i++){ 
		printf("%d \n",tableau[i]) ;

	}
	decodeur(messag,tableau);
	
		printf("%s \n",messag) ;

	
	return 0;
}
