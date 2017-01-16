#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void decodeur(char *messag, int tableau[]){
	/*"Arrete! C'est ici l'empire de la mort \n"*/
	int k=strlen(messag);
	int i;
	int l=0;
	int code[28]={10,27,27,14,29,14,12,14,28,29,18,12,18,21,14,22,25,18,27,14,13,14,21,10,22,24,27,29};
	for ( i=0;i<k;i++){
		if (tableau[i]!=36){l=l+1;
			tableau[i]=(tableau[i]-code[i%28])%36;
			}
		switch(tableau[i]){
         	   case 10:
          	     messag[i]='a';
         	      break;
         	   case 11:
         	      tableau[i]='b';
         	      break;
         	   case 12:
         	     tableau[i]='c';
 	 	      break;
         	   case 13:
         	      tableau[i]='d';
         	      break;
         	   case 14:
         	      tableau[i]='e';
         	      break;
         	   case 15:
         	      tableau[i]='f';
	 	      break;
         	   case 16:
         	      tableau[i]='g';
        	       break;
        	    case 17:
        	       tableau[i]='h';
   	               break;
        	    case 18:
        	       tableau[i]='i';
  		       break;
        	   case 19:
  	              tableau[i]='j';
  	              break;
  	           case 20:
 	              tableau[i]='k';
 	              break;
 	           case 21:
 	              tableau[i]='l';
 		      break;
 	           case 22:
 	              tableau[i]='m';
 	              break;
 	           case 23:
 	              tableau[i]='n';
 	              break;
 	           case 24:
 	             tableau[i]='o';
		       break;
	            case 25:
	               tableau[i]='p';
	               break;
	            case 26:
	               tableau[i]='q';
       		       break;
       	            case 27:
 	              tableau[i]='r';
		       break;
   	            case 28:
	               tableau[i]='s';
		       break;
		    case 29:
		       tableau[i]='t';
		       break;
		    case 30:
		       tableau[i]='u';
		       break;
		    case 31:
		      tableau[i]='v';
		       break;
		    case 32:
		       tableau[i]='w';
		       break;
		    case 33:
		       tableau[i]='x';
		       break;
		    case 34:
		       tableau[i]='y';
		       break;
		    case 35:
		       tableau[i]='z';
		       break;
		    case 0:
		       tableau[i]='0';
		       break;
		    case 1:
		       tableau[i]='1';
		       break;
		    case 2:
		       tableau[i]='2';
		       break;
		    case 3:
		       tableau[i]='3';
		       break;
		    case 4:
		       tableau[i]='4';
		       break;
		    case 5:
		       tableau[i]='5';
		       break;
		    case 6:
		       tableau[i]='6';
		       break;
		    case 7:
		       tableau[i]='7';
		       break;
		    case 8:
		       tableau[i]='8';
		       break;
		    case 9:
		       tableau[i]='9';
		       break;
		    case 36:
		       tableau[i]=' ';
		       break;
		}
	
	
}
	

	
}
