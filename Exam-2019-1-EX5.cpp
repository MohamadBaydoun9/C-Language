/*
Write a program in C language that: (7 pts)
a) Creates a one-dimensional array V containing nine integer elements
b) Fills the array V by positive integer numbers
c) Calculates and displays the sum of multiples of 3 in V
d) Calculates and displays the product of negative numbers of odd rank in V
e) Creates from array V another array T of the same dimension as V knowing that:
	- If the value of the array V contains an even number, put a 0, as value, at the same index in T
	- If the value of the array V is odd then we put a “1”, as value, at the same index in T
Example:
Table V
12 3 20 14 30 -20 19 -5 8
Table T will be
0 1 0 0 0 0 1 1 0
f) Sort the vector V in descending order
g) Displays the elements of the array V and the array T
*/
#include <stdio.h>
int main(){
	int i, j, temp, s, p;
	int V[9];						//part a 
	
	for(i=0; i<9; i++){				//part b
		do{
			printf("Enter a positive number: ");
			scanf("%d", &V[i]);
		}while(V[i] <0);
	}
	
	s=0;							//part c
	for(i=0; i<9; i++){
		if(V[i] % 3 == 0){
			s = s + V[i];
		}
	}
	printf("Sum of multiples of 3 = %d\n", s);

	p=1;							//part d
	for(i=1; i<9; i=i+2){
		if(V[i] < 0 && i%2!=0){
			p = p * V[i];
		}
	}
	printf("Product of negative nbrs of odd rank= %d\n", p);
	
	int T[9]; 						//part e
	for(i=0; i<9; i++){
		if(V[i] % 2 == 0){
			T[i] = 0;
		}
		else{
			T[i] = 1;
		}
	}
	
	for(i=0;i<9;i++){  				 //part 6
		for(j=i+1;j<9;j++){ 
			if(V[j]<V[i]){ 
				temp=V[j]; 
				V[j]=V[i]; 
				V[i]=temp; 
			} 
		} 
	} 
	
	for(i=0; i<9; i++){				//part g
		printf("%d\t", V[i]);
	}
	printf("\n");
	for(i=0; i<9; i++){
		printf("%d\t", T[i]);
	}
}
