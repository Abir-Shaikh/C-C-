//Write a program to find the largest number among three numbers using “binary minus” operator.

#include<stdio.h>
int main() {
	float a,b,c,largest;
	printf("Enter the Number :-");
	scanf("%f %f %f",&a,&b,&c);
	if (a-b>0){
		largest = a;
	}else if (b-c>0){
		largest = b;
	}else{
		largest = c;
	}
	printf("The largest Number :- %.2f",largest);
}
