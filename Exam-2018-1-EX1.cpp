/*I- Given a, b and c integer variables to which the following values have been affected: (1 pt)
a = 8
b = 3
c = -5 
Determine the value of the following arithmetic expressions:
a) 2 * b + 3 * (a – c)
b) a / b
c) a % b
d) a * (b / c)
Solution
int a=8, b=3, c=-5
a) 45 2 * b + 3 * (a – c)
2 * 3 + 3 * (8 + 5)
6 + 3 * 13
6 + 39
=45
b)  a / b
8 / 3
=2
c)  a % b
8 % 3
=2
d)  a * (b / c)
8 * (3 / -5)
8 * 0
=0
*/
#include <stdio.h>
int main(){
printf("%d\n", 2 * 3 + 3 * (8 - -5));//a
printf("%d\n", 8 / 3);//b
printf("%d\n", 8 % 3);//c
printf("%d\n", 8 * (3 / -5) );//d
}


