/*
V- Write a program in C language that: (10 pts)
a) Creates a one-dimensional array V1 composed of 8 elements.
b) Fills the array V1 by positive integer numbers.
c) Calculates and displays the sum of the numbers in V1.
d) Changes the values of the array elements of V1 such that: the elements with odd index are multiplied by two 
and the elements in even index are added by 1.
e) Creates, from the values of the array V1, the array V2 containing in each of its cases the subtraction of the successive cases of V1:
- The first value of V2 is equal to the first value of V1.
- Each value of the case V2 = the value of the preceding case of V1 – the value of the case of V1 having the same index of V2 { V[i-1] - V[i] } previos-current.
Example:
Array V1 
12 8 4 3 6 2 1 1
After update:
Array V1 
13 16 5 6 7 4 2 2
Array V2
13 -3 11 -1 -1 3 2 0
f) Sorts the array V1 in ascending order.
g) Displays the contents of the array V1 (each value in a row).
*/

#include <stdio.h>
int main(){
	int i, j, temp, s;
	int V1[8]; 						//part a
	
	for(i=0; i<8; i++){				//part b
		do{
			printf("Enter a positive integer nbr:");
			scanf("%d", &V1[i]);
		}while(V1[i] < 0);
	}
	s=0;							//part c
	for(i=0; i<8; i++){
		s = s + V1[i];
	}
	printf("Sum=%d\n", s);
	
	for(i=0; i<8; i++){        		//part d
		if(i % 2 == 0)
			V1[i] = V1[i] + 1;
		else
			V1[i] = V1[i] * 2;
	}
	
	int V2[8];						//part e
	V2[0] = V1[0];
	for(i=1; i<8; i++){
		V2[i] = V1[i-1] - V1[i];
	}
	
	for(i=0; i<8; i++){        		//part f
		for(j=i+1; j<8;j++){
			if(V1[i] > V1[j]){
				temp = V1[i];
				V1[i] = V1[j];
				V1[j] = temp;
			}
		}
	}
	
	for(i=0; i<8; i++){ 			//part g
		printf("%d\n", V1[i]);// \n (each value in a row).
	}
	
	return 0;
}

