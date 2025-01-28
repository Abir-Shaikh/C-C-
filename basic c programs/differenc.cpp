////Check the difference in the results of the following two operations (in the same
//program) where y and m are two integer variables. Print the value of m in both the
//cases.
//a) y=5; b) y=7;
//m=y++; m=++y;


#include<stdio.h>
int main() {
	int y,m;
	
	y=5;
	m=y++;
	printf("the value is %d\n",m);
	
	y=7;
	m=++y;
	printf("the value is %d\n",m);
}
