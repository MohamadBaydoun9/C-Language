/*
Write a program C that fills a two-dimensional array M[4][3] by integer numbers (2 ½ pts)
The program must calculate and display the average of the positive numbers in M
*/
#include <stdio.h>
int main(){
	int M[4][3], i, j;
	//filling The Array
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
		printf("Enter an integer number M[%d][%d]:",i,j);//optional
		scanf("%d", &M[i][j]);
		}
	}
	//adding and Counting Positive Integers 
	int sum=0, count=0;
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			if(M[i][j] >= 0){
				sum = sum + M[i][j]; //adding
				count++;            //counting
			}
		}
	}
	//calculating Average
	float Av;
	if(count > 0)
		Av = (float)sum/count;
	else
		Av = 0;
	printf("Average of Positive Numbers = %f", Av);
}
