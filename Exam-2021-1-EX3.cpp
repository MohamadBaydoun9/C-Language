/* 
Write a program in C language which allows you to: (8 pts) 
1- Create a one-dimensional array A containing 8 integers. 
2- Fill the array A by integers between -10 and 50. 
3- Calculate and display the sum of the positive numbers in this array. 
4- Display the rank (index) of the negative numbers existing in this array. 
5- Divide the array A into 2 arrays A1 and A2 knowing that: 
The first array A1 must contain the even numbers from the array A and the second A2 the odd numbers.
6- Sort the array A by ascending order 
*/
#include<stdio.h> 
main(){ 
	int A[8], i;            						   //part 1
	
	for(i=0;i<8;i++){                                  //part 2
		do{ 
			scanf("%d",&A[i]); 
		}while(A[i]<-10 || A[i]>50); 
	} 
	
	int sum=0;                                         //part 3
	for(i=0;i<8;i++){ 								  
		if(A[i]>0) {
			sum=sum+A[i]; 
		}	
	} 
	printf("The sum is %d\n", sum); 
	
	for(i=0;i<8;i++){                             	   //part 4
		if(A[i]<0){
			printf("%d ", i); 
		}
	} 
	
	int A1[8], A2[8], x=0, y=0;						   //part 5
	for(i=0;i<8;i++){ 					  
		if(A[i] % 2==0){ 
			A1[x]=A[i]; 
			x++; 
		} 
		else{ 
			A2[y]=A[i]; 
			y++; 
			} 
	} 
	int j,temp;
	for(i=0;i<7;i++){  								   //part 6
		for(j=i+1;j<7;j++){ 
			if(A[j]<A[i]){ 
				temp=A[j]; 
				A[j]=A[i]; 
				A[i]=temp; 
			} 
		} 
	} 
}
