//Write a C program to calculate area and circumference of a circle. Take user input using scanf().

#include <stdio.h>
#include <math.h>
int main(){
	float c,a,r;
	printf("Enter the value of r :-");
	scanf("%f", &r);
	c= (2*3.14*r);
	a= (3.14*r*r);
	printf("The value of c %f",c);
	printf("The value of a %f",a);
}
