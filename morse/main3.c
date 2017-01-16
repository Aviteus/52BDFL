#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int find(char * letter){
	int i;
	char * dictionnaire[37];
	dictionnaire[0]  = "11011011011011000";
	dictionnaire[1]  = "1011011011011000";
	dictionnaire[2]  = "101011011011000";
	dictionnaire[3]  = "10101011011000";
	dictionnaire[4]  = "1010101011000";
	dictionnaire[5]  = "101010101000";
	dictionnaire[6]  = "1101010101000";
	dictionnaire[7]  = "11011010101000";
	dictionnaire[8]  = "110110110101000";
	dictionnaire[9]  = "1101101101101000";
	dictionnaire[10] = "1011000";
	dictionnaire[11] = "11010101000";
	dictionnaire[12] = "110101101000";
	dictionnaire[13] = "110101000";
	dictionnaire[14] = "1000";
	dictionnaire[15] = "10101101000";
	dictionnaire[16] = "1101101000";
	dictionnaire[17] = "1010101000";
	dictionnaire[18] = "101000";
	dictionnaire[19] = "1011011011000";
	dictionnaire[20] = "1101011000";
	dictionnaire[21] = "10110101000";
	dictionnaire[22] = "11011000";
	dictionnaire[23] = "1101000";
	dictionnaire[24] = "11011011000";
	dictionnaire[25] = "101101101000";
	dictionnaire[26] = "1101101011000";
	dictionnaire[27] = "101101000";
	dictionnaire[28] = "10101000";
	dictionnaire[29] = "11000";
	dictionnaire[30] = "101011000";
	dictionnaire[31] = "101011000";
	dictionnaire[32] = "1011011000";
	dictionnaire[33] = "110101011000";
	dictionnaire[34] = "1101011011000";
	dictionnaire[35] = "110110101000";
	dictionnaire[36] = "0000";
	for(i=0;i<37;i++){
		if(dictionnaire[i] == letter)
			return i;
	}
	return -1;	
}





void main(){
    char messageMorse[]="1011011011011000000010101011011000101010101000110110101010001101101101101000110101010001101010001010110100010101010001011011011000";
	int sizeMessage = strlen(messageMorse)/4;
	char message[sizeMessage];
	char *delim = "0000000";
	char *token;
	char *tofree;
	char * parsed[sizeMessage];
	if (messageMorse != NULL){	
		tofree = messageMorse;
		/*while((token = strsep(&tofree, delim)) != NULL){
			if(*token == 0)
				printf("0\n");
			else
				printf("%s\n",token);		
		}*/
		


// En cours ask DELOUYE
/*while((token = strsep(&tofree, delim)) != NULL){
			char * characters[sizeMessage];			
			char * character= "";
			int i = 0;
			int j = 0;
			if(i == 6){
				characters[i] = " ";

			if(*token == 0){
				i++;
			else 	
				strcat(character,token);
				strcat(character,'0');
		}*/
	}



	






// Dictionnaire Lettre -> Chaine charactères de 0 OU 1
	char * dictionnaire[37];
	dictionnaire[0]  = "11011011011011000";
	dictionnaire[1]  = "1011011011011000";
	dictionnaire[2]  = "101011011011000";
	dictionnaire[3]  = "10101011011000";
	dictionnaire[4]  = "1010101011000";
	dictionnaire[5]  = "101010101000";
	dictionnaire[6]  = "1101010101000";
	dictionnaire[7]  = "11011010101000";
	dictionnaire[8]  = "110110110101000";
	dictionnaire[9]  = "1101101101101000";
	dictionnaire[10] = "1011000";
	dictionnaire[11] = "11010101000";
	dictionnaire[12] = "110101101000";
	dictionnaire[13] = "110101000";
	dictionnaire[14] = "1000";
	dictionnaire[15] = "10101101000";
	dictionnaire[16] = "1101101000";
	dictionnaire[17] = "1010101000";
	dictionnaire[18] = "101000";
	dictionnaire[19] = "1011011011000";
	dictionnaire[20] = "1101011000";
	dictionnaire[21] = "10110101000";
	dictionnaire[22] = "11011000";
	dictionnaire[23] = "1101000";
	dictionnaire[24] = "11011011000";
	dictionnaire[25] = "101101101000";
	dictionnaire[26] = "1101101011000";
	dictionnaire[27] = "101101000";
	dictionnaire[28] = "10101000";
	dictionnaire[29] = "11000";
	dictionnaire[30] = "101011000";
	dictionnaire[31] = "101011000";
	dictionnaire[32] = "1011011000";
	dictionnaire[33] = "110101011000";
	dictionnaire[34] = "1101011011000";
	dictionnaire[35] = "110110101000";
	dictionnaire[36] = "0000";
	

}
