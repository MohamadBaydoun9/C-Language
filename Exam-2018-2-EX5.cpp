/*
V- Write, in C language, a function Disp () which accepts as parameter a string of characters CH and performs the 
following treatments: (4 pts)

a) Displays the string CH character by character (only one character on each row). 
b) Calculates and returns the number of existing spaces in this string.
*/
#include <stdio.h>
#include <string.h>
int Disp(char CH[]);

int main(){
	int spaces_number;
	char text[]="any text for  example";
	spaces_number=Disp(text); //calling the method for testing
	printf("Number of Spaces in This String is : %d\n",spaces_number );
}
//solution:
int Disp(char CH[]){
	int i;
	int len=strlen(CH);
	for(i=0; i<len; i++){ 			//part a
		printf("%c\n", CH[i]);
	}
	
	int count=0;					//part b
	for(i=0; i<len; i++){
		if(CH[i] == ' ')
		count = count + 1;
	}
	return count;
}
