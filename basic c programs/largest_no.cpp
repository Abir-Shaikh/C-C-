//Write a C program print largest number among three number

#include<stdio.h>
int main() {
	int a,b,c;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("Enter the Number : ");
	scanf("%d",&b);
	printf("Enter the Number : ");
	scanf("%d",&c);
	
	int largest;
	
	if(a >= b && a >= c){
		largest = a;
	}else if(b >= a && b >= c){
		largest = b;
	}else {
		largest = c;
	}
	printf("the largest number is : %d\n", largest );
}
