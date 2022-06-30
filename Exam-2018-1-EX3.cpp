/*
III- Write in C language a function ESPD ( ) that accepts as parameter a String TEXT and a character VAR, the
function must perform the following treatments: ( 3 pts)
a- Display the string TEXT in reverse order.
b- Calculate and return the number of occurrences of the character VAR in the string TEXT.
Example: If the string TEXT contains the following characters:
And the character VAR is "r": the program must return 2.
*/
#include <stdio.h>
#include <string.h>
int ESPD(char TEXT[], char VAR);

int main(){
	int acc;
	char text[]="text for example";
	char var='a';
	acc=ESPD(text,var); //calling the method for testing
	printf("\nOccurrences of %c in String is : %d \n",var,acc );
}

int ESPD(char TEXT[], char VAR){
	int i, c;
	int len=strlen(TEXT);
	for(i=len - 1; i>=0; i--){ 				//part a 
		printf("%c", TEXT[i]);
	}
	
	c=0;									//part b
	for(i=0 ; i<len ; i++){
		if(TEXT[i] == VAR){
			c = c + 1;
		}
	}
	
	return c;
}
