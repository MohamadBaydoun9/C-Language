/* 
Write a program in C language which allow  you to:
a. Create a one-dimensional array TABI containing 7 integers.
b. Fill in the array TAB1 with integers between 1 and 10. 
c. Display the elements of the array TAB1 upside down (Reverse Order). 
d. Display the indexes of odd numbers existing in this array(TAB1). 
e. Display the list of even numbers existing in his array(TAB1).
f. Create from array TAB1 another array T as Follow: 
• if the array TAB1 contains an even number, we put (0) in the sane place in T.
• if the array TAB1 contains an odd number, we put (1) in the same place in T .

*/

#include<stdio.h> 
int main(){ 
	int TAB1[7], i, T[7], j;       //part a
	
	for(i=0;i<7;i++){                   //part b
		do{ 
			scanf("%d",&TAB1[i]); 
		}while(TAB1[i]<=1 || TAB1[i]>=10); 
	} 
	
	for(i=6;i>=0;i--){                  //part c 
		printf("%d ",TAB1[i]); 
	}
	
	for(i=0;i<7;i++){                   //part d
		if(TAB1[i]%2!=0){
			printf("%d ", i); 
		}
	}
	    
 	for(i=0;i<7;i++){                  //part e
	 	if(TAB1[i]%2==0){
		 	printf("%d ", TAB1[i]); 
			}
		}
	
	for(i=0;i<7;i++){                   //part f 
		if(TAB1[i]%2==0){
			T[i]=0; 
		}
		else{
			T[i]=1;
		}
	}
}
