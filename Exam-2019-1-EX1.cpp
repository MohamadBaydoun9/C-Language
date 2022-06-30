/* Display the result given by the following program: (1 ½ pts) */
#include <stdio.h>
#include <math.h>
int  main(){ 
	int a=19, b=4, c, d, s;
	float r, f;
	c=a/b;
	f=a/b;
	r=(float) a/b;
	d=a%b;
	s=sqrt(a*b-(a-b-3));
	printf("%d\n", c); //a
	printf("%f\n", f); //b
	printf("%f\n", r); //c
	printf("%d\n", d); //d
	printf("%d\n", d); //e
	printf("%d\n", a>b); //f
}
