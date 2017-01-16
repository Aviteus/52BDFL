#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void codeur(char messag[], int* tableau){
	/*"Arrete! C'est ici l'empire de la mort \n"*/
	int k=strlen(messag);
	int i;
	int l=0;
	int code[28]={10,27,27,14,29,14,12,14,28,29,18,12,18,21,14,22,25,18,27,14,13,14,21,10,22,24,27,29};
	for ( i=0;i<k;i++){
		switch(messag[i]){
         	   case 'a':
          	     tableau[i]=10;
         	      break;
         	   case 'b':
         	      tableau[i]=11;
         	      break;
         	   case 'c':
         	     tableau[i]=12;
 	 	      break;
         	   case 'd':
         	      tableau[i]=13;
         	      break;
         	   case 'e':
         	      tableau[i]=14;
         	      break;
         	   case 'f':
         	      tableau[i]=15;
	 	      break;
         	   case 'g':
         	      tableau[i]=16;
        	       break;
        	    case 'h':
        	       tableau[i]=17;
   	               break;
        	    case 'i':
        	       tableau[i]=18;
  		       break;
        	   case 'j':
  	              tableau[i]=19;
  	              break;
  	           case 'k':
 	              tableau[i]=20;
 	              break;
 	           case 'l':
 	              tableau[i]=21;
 		      break;
 	           case 'm':
 	              tableau[i]=22;
 	              break;
 	           case 'n':
 	              tableau[i]=23;
 	              break;
 	           case 'o':
 	             tableau[i]=24;
		       break;
	            case 'p':
	               tableau[i]=25;
	               break;
	            case 'q':
	               tableau[i]=26;
       		       break;
       	            case 'r':
 	              tableau[i]=27;
		       break;
   	            case 's':
	               tableau[i]=28;
		       break;
		    case 't':
		       tableau[i]=29;
		       break;
		    case 'u':
		       tableau[i]=30;
		       break;
		    case 'v':
		      tableau[i]=31;
		       break;
		    case 'w':
		       tableau[i]=32;
		       break;
		    case 'x':
		       tableau[i]=33;
		       break;
		    case 'y':
		       tableau[i]=34;
		       break;
		    case 'z':
		       tableau[i]=35;
		       break;
		    case '0':
		       tableau[i]=0;
		       break;
		    case '1':
		       tableau[i]=1;
		       break;
		    case '2':
		       tableau[i]=2;
		       break;
		    case '3':
		       tableau[i]=3;
		       break;
		    case '4':
		       tableau[i]=4;
		       break;
		    case '5':
		       tableau[i]=5;
		       break;
		    case '6':
		       tableau[i]=6;
		       break;
		    case '7':
		       tableau[i]=7;
		       break;
		    case '8':
		       tableau[i]=8;
		       break;
		    case '9':
		       tableau[i]=9;
		       break;
		    case ' ':
		       tableau[i]=36;
		       break;
		}
	if (tableau[i]!=36){l=l+1;
			tableau[i]=(tableau[i]+code[i%28])%36;
			}
	
}
	

	
}
