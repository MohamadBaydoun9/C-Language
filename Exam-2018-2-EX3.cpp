/*III- Consider the declarations of the following variables: (1 pt)
int m = 7 , y = 22 ;
int P ;
float R ;
What is the value assigned to the different variables involved in each of the following instructions?
R = y/m;
y = m = = y; 
P= y % m + y > m;
R = (float) y / m;
Solution:
3.000000
0
1
3.142857
*/
#include <stdio.h>
void p1();
void p2();
void p3();
void p4();
int main(){
	p1();
	p2();
	p3();
	p4();
}

void p1(){
	int m = 7 , y = 22 ;
	int P ;
	float R ;
	R = y/m;
	printf("%f\n", R);
}

void p2(){
	int m = 7 , y = 22 ;
	int P ;
	float R ;
	y = m == y; 
	printf("%d\n", y);
}

void p3(){
	int m = 7 , y = 22 ;
	int P ;
	float R ;
	P= y % m + y > m;
	printf("%d\n", P);
}

void p4(){
	int m = 7 , y = 22 ;
	int P ;
	float R ;
	R = (float) y / m;
	printf("%f\n", R);
}





