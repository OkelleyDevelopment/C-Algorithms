/* A program to check if a sentence is a palindrome */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 100

bool is_palindrome(char *a, int n);

int main(void){

	char ch, message[SIZE];
	int i = 0;
	
	
	
	printf("Enter a message... ");

	while(i < SIZE && (ch = getchar()) != '\n'){
		if(isalpha(ch)){
			message[i++] = toupper(ch);
		}
	}

	if(is_palindrome(message, i - 1)){
		printf("The message recieved is a palindrome!\n");

	}
	else{
		printf("The message recieved is NOT a palindrome!\n");
	}

	return 0;

}


bool is_palindrome(char *a, int n){
	char *left, *right;

	for(left = a, right = a + n; left <= right; left++, right --){
	       if(*left != *right){
			return false;
	       }
	}
	return true;
}


