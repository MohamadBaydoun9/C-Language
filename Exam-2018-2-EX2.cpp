/*
II- Write, for each sequence, the corresponding C program: (3 pts)
a) 5 10 15 20 25
b) 1 4 13 40 121
c) 1000 500 250 125 62
*/
#include <stdio.h>
int main(){
	int i;
	for(i=5; i<=25; i=i+5){ 		//part a;
		printf("%d\t", i);	
	}
	printf("\n");
	for(i=1; i<=121; i=i*3+1){      //part b
		printf("%d\t", i);
	}
	printf("\n");
	for(i=1000; i>=62; i=i/2){ 	    //part c
		printf("%d\t", i);
	}
}

