/*
Write a program in C language that displays the sequence of N terms of the following sequence: (2 ½ pts)
11 13 10 12 9 11 8 10 7 . . . N is an integer number given by the user
Ex: If N = 6 the program should display: 11 13 10 12 9 11
*/
#include <stdio.h>
int main(){
	int N, i, x;
	printf("Enter an integer number: ");
	scanf("%d", &N);
	x=11;
	for(i=1; i<=N; i++){
		printf("%d\t", x);
		if(i % 2 == 1){
			x = x + 2;
		}
		else{
		x = x - 3;
		}
	}
}
