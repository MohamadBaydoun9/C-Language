/*
II- Write, in C language, the programs that display the following sequences, using: (3 pts)
a) The loop "for".
3 5 7 9 11 13 15 17 
b) The loop "While".
2 3 5 9 17 33 65 129 
c) The loop "do – While"
19 15 11 7 3 -1 -5 -9
*/
#include <stdio.h>
int main(){
	int i;
	for(i=3; i<=17; i=i+2) 			//part a
		printf("%d\t", i);
	printf("\n");
	i=2;							 //part b
	while(i <= 129){
		printf("%d\t", i);
		i = i * 2 - 1;
	}
	printf("\n");
	i=19;							 //part c
	do{
		printf("%d\t", i);
		i = i - 4;
	}while(i >= -9);
}

