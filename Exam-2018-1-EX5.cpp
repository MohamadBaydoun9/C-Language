/*V- 
Write a C program that fills a two-dimensional array T[6][4] by integer numbers given by the user. (3 pts)
The program must calculate and display the sum of the numbers of each column of the array.
For example, if you fill the array T with the following numbers:
The program must display the following form:
The sum of the column 1 is 188
The sum of the column 2 is 75
The sum of the column 3 is 114
The sum of the column 4 is 92
*/
#include <stdio.h>
int main(){
	int i, j , s;
	int T[6][4];
	
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			printf("Enter T[%d][%d]:",i,j);
			scanf("%d", &T[i][j]);
		}
	}
	
	
	for(i=0; i<4; i++){
		s=0;
		for(j=0; j<6; j++){
			s = s + T[j][i];
		}
		printf("The sum of the column %d is %d\n", i+1, s);
	}
}

