//create a calculator using switch case with all possible validation.

#include<stdio.h>
int main() {
	
	float a,b,result; 
	
	char choose;
	printf("Enter your choice (+|-|*|/|%) :-");
	scanf("%c",&choose);
	printf("Enter  the number :-");
	scanf("%f %f",&a,&b);
	
	switch (choose) {
		case '+':
			result = (a+b);
			printf("The Addition is :- %.2f",result);
			break;
			
		case '-':
			result = (a-b);
			printf("The Subtraction is :- %.2f",result);
			break;
			
		case '*':
			result = (a*b);
			printf("The Multiplication is :- %.2f",result);
			break;
			
		case '/':
			result = (a/b);
			printf("The Division is :- %.2f",result);
			break;
			
		default:
			printf("Invalid");
			break;
	}
}
