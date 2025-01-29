//Write a C program to determine the grade of a student based on their marks. The grading system is as follows:
//Marks >= 90: Grade A
//Marks >= 75 and < 90: Grade B
//Marks >= 50 and < 75: Grade C
//Marks >= 35 and < 50: Grade D
//Marks < 35: Grade F

#include<stdio.h>
int main() {
	int marks;
	printf("The grade of the student is : ");
	scanf("%d",&marks);
	
	if(marks >= 90){
		printf("Grade A");
	}else if(marks >=75 && marks <= 90){
		printf("Grade B");
	}else if(marks >=50 && marks <= 75){
		printf("Grade C");
	}else if(marks >=35 && marks <= 50){
		printf("Grade D");
	}else{
		printf("Grade F");
	}

}
