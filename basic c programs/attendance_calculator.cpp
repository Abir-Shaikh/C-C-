//Write a C program attendance program 1. total class=500 and attended class =50 calculate the percentage and if 75 % above they are  pass and below they are  fail.

#include<stdio.h>

int main() {
	
	const int total_class=500;
	int attended=50;
	float percentage = ((float)attended/total_class)*100;
	printf("total percentage : %.2f%%\n",percentage);
	if(percentage>=75.0){
		printf("Result : pass");
	}else{
		printf("Result : Fail");
	}
	
}
