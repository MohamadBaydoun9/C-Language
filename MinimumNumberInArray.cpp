/*
fill the array a[8];
find the Minumum Number in the Array a[8];
*/
#include<stdio.h>
int main(){
	int a[8],i;

	for(i=0;i<8;i++){
		printf("please enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	for(i=0;i<8;i++){
		if(a[i]<min)
		min=a[i];
		
	}
	printf("Minumum Number is:%d",min);
}
		
