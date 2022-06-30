/*
Write in C language, a function PART which accepts a string of characters Text, then permits to divide the characters in 
this string into three strings and display them: (4 pts)
String CL: a string of letters
String CC: a string of numbers and 
String CS: a string of other characters
*/
#include <stdio.h>
#include <string.h>
void PART(char Text[] );//Declaring The Function at The Beginning of Program To Be In main scope;

int main(){
	char text[]="1h4hs6#ds1^99dgfd;'d";// Calling The PART Function From main;
	PART(text);
}
//solution :
void PART(char Text[]){
	int i, x=0, y=0, z=0;
	int L = strlen(Text);
	char CL[L], CC[L], CS[L];
	for(i=0; i<strlen(Text); i++){
		if(Text[i] >='A' && Text[i]<= 'Z' || Text[i] >='a' && Text[i] <='z') {
			CL[x]= Text[i];
			x++;
		}
		else if(Text[i]>='0' && Text[i]<='9'){
			CC[y]= Text[i];
			y++;
		}
		else{
			CS[z]= Text[i];
			z++;
		}
	}
	printf("Letters in this Array    :%s\n", CL);
	printf("Digits in this Array     :%s\n", CC);
	printf("Characters in this Array :%s\n", CS);
}
