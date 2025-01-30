//Write a C program to check a letter is vowel or consonant

#include<stdio.h>
int main() {
	char letter ;
	printf("Enter the letter :- \n");
	scanf("%c",&letter);
	
	if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' 
	|| letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u'){
		printf("vowel\n");
	}else {
		printf("consonants\n");
	}
	
}
