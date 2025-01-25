//Find the average of four float numbers and display the result. Take user input.

#include<stdio.h>

int main(){
	float n1,n2,n3,n4,avg;
	
	
	printf("Enter the value :-\n");
	scanf("%f %f %f %f",n1,n2,n3,n4);
	avg = (n1+n2+n3+n4)/ 4;
	
	printf("The average of the four numbers is: %.2f\n",avg);
	
	return 0;	
}
