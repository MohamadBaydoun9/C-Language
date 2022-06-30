/*Write a Program That Calculates The Sum Of The Following Sequence 1,2,4,7,11,16,22...N
==>N is Given by Keyboard
if N=5 Then 1+2+4+7+11 diplays 25
*/
#include<stdio.h>
int main(){
	int sum=0,nb=1,N,i;
	
	do{
		scanf("%d",&N);
	}while(N<0);

	for(i=1;i<=N;i++){ 
	 	sum = sum + nb; 
	 	nb+=i; 
 	} 
 	
	printf("\n%d",sum);
}
