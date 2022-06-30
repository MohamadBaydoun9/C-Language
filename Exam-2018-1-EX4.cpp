/*
IV- Write a program in C language that: (10 pts)
a) Creates a one-dimensional array V containing 12 elements of type integer
b) Fills the array V by integer positive numbers.
c) Calculates and displays the sum of the numbers multiples of 5 in V.
d) Calculates and displays the product of the numbers of even index (even rank) in V.
e) Creates from the array V the array T containing all the elements of the array V as follows:
- The first element of the array T contains the value of the first element of the array V.
- The second element of the array T contains the value of the last element of the array V.
- The third element of the array T contains the value of the second element of the array V.
- The fourth element of the array T contains the value of the second to last element of the array V.
- And so on ...
Example:
Array V
2 20 30 7 38 9 11 8 2 60 28 22
Array T
2 22 20 28 30 60 7 2 38 8 9 11
f) Sorts the array V in descending order.
g) Displays the elements of the array V and the array T.
*/
#include <stdio.h>
int main(){
	int i, j, temp, s, p;
	int V[12]; 						//part a
	
	for(i=0; i<12; i++){			//part b
		do{
			printf("Enter a positive number:");
			scanf("%d", &V[i]);
		}
		while(V[i] < 0);
	}
	
	s=0;							//part c
	for(i=0; i<12; i++){
		if(V[i] % 5 == 0)
			s = s + V[i];
	}
	printf("Sum = %d\n", s);
	
	p=1;							//part d
	for(i=0; i<12; i++){
		if(i % 2 == 0)
			p = p * V[i];
	}
	printf("Product= %d\n", p);
	
	j=11;//variable for last index //part e
	int k=0; //variable for first index
	int T[12];
	for(i=0; i<12; i++){
		if(i % 2 == 0){
			T[i] = V[k];
			k=k+1;
		}
		else{
			T[i] = V[j];
			j=j-1;
		}
	}
	
	for(i=0;i<11;i++){  			//part f
		for(j=i+1;j<11;j++){ 
			if(V[j]<V[i]){ 
				temp=V[j]; 
				V[j]=V[i]; 
				V[i]=temp; 
			} 
		} 
	} 
	
	for(i=0; i<12; i++)			 //part g
		printf("%d\t", V[i]);
	printf("\n");
	for(i=0; i<12; i++)
		printf("%d\t", T[i]);
}

