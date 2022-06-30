/*
Write in C language a program that displays the following: 
10 15 20 25 30 35 40 
a)Use the for loop
b)Use the While loop
*/
#include<stdio.h> 
main(){ 
	int i; 
	//part a Using the for loop  
	for(i=10;i<=40;i=i+5) {
		printf("%d ", i); 
	}
	
	printf("\n"); 
	
	//part b Using the while loop 
	i=10; 
	while(i<=40){ 
		printf("%d ", i); 
		i=i+5; 
	}
}
