/*
 * Author: Nicholas O'Kelley
 *
 * Write a program to check the "smallest" and "largest" word in a series of words.
 * After the user enters the words, the program will determine which words
 * would come first and last if the words were listed in dictionary order. The program
 * must stop accepting input when the user entes a four-letter word. Assume that no word
 * is more than 20 letters long.
 */

#include <stdio.h>
#include <string.h>

#define SIZE 20

void read_line(char str[], int n);

int main(void){

	char curr_word[SIZE + 1];
	char smallest[SIZE + 1];
	char largest[SIZE + 1];

	
	printf("Enter a word: ");
	read_line(curr_word, SIZE);
	strcpy(smallest, strcpy(largest, curr_word));

	while(strlen(curr_word) != 4){
		printf("Enter a word: ");
		read_line(curr_word, SIZE);
		
		if(strcmp(curr_word, smallest) < 0){
			strncpy(smallest, curr_word, SIZE);
		}
		if(strcmp(curr_word, largest) > 0){
			strncpy(largest, curr_word, SIZE);
		}
	}

	printf("\nSmallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);

	return 0;
}

void read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar()) != '\n'){
		if(i < n){
			str[i++] = ch;
		}
	}
	str[i] = '\0';
}




