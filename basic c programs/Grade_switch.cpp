//make a grade system in switch case as per standerd grade rules.

#include<stdio.h>
int main() {
	
	int grade;
	printf("The grade is :");
	scanf("%d",&grade);
	
	int marks = (int)grade/10;
	

	switch (marks) {
		case 10:
		case 9:
			printf("Grade A\n");
			break;
		
		case 8:
			printf("Grade B\n");
			break;
			
		case 7:
			printf("Grade C\n");
			break;
			
		case 6:
			printf("Grade D\n");
			break;
			
		case 5:
			printf("Grade E\n");
			break;
			
		default:
			printf("Grade F\n");
			break;		
	}
}
