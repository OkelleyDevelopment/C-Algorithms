/* This program checks if parentheses and braces are properly nested */

#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int main(void){

	printf("\n===================================\n");
	printf("===== Welcome to B & P Checker ====\n");
	printf("===================================\n");

	char input;

	printf("\nEnter parentheses and/or braces: ");

	while((input = getchar()) != '\n'){
		if(input == '}' && pop() != '{'){
			printf("Parentheses/braces are not nested properly\n");
			return 0;
		}
		else if(input == ')' && pop() != '('){
			printf("Parentheses/braces are not nested properly\n");
			return 0;
		} 
		else if( input == '(' || input == '{'){
			push(input);
		}
	}

	if(!is_empty){
		printf("Parentheses/braces are not nested properly\n");
		return 0;
	}
	
	printf("Parentheses/braces are nested properly\n");
	return 0;
	
}




void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(char c){
	if(is_full()){
		stack_overflow();
	}
	else{
		contents[top++] = c;
	}
}

char pop(void){
	if(is_empty()){
		stack_underflow();
	}
	else{
		return contents[--top];
	}
}


void stack_overflow(void){
	printf("\nStack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void){
	printf("\nStack underflow\n");
	exit(EXIT_FAILURE);
}




