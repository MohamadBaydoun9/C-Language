/*
Display The Following Pattern:
please enter the number of n: 5
1       1       1       1       1
2       2       2       2
3       3       3
4       4
5
*/
#include<stdio.h>
int main(){
	int i,j,n;
	printf("please enter the number of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("%d\t",i);}
			printf("\n");
		
	}
}
