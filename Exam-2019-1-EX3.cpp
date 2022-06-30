/*
Write a program in C language that displays N lines with the form below: (2 ½ pts)
If N = 6
*
+ 	+
*	*	*
+ 	+ 	+	+
* 	* 	*	*	*	
+ 	+	+ 	+ 	+	 +
N is a positive integer entered by the user
*/

#include <stdio.h>
int main() {
	int N, i, j;
	do{
		printf("Enter a positive integer number: ");
		scanf("%d", &N);
	}while(N <= 0);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=i; j++){
			if(i % 2 == 1){
				printf("*\t");
			}
			else{
				printf("+\t");
			}
		}	
		printf("\n");
	}
}

