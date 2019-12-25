/* 
 *
 * Author: Nicholas O'Kelley
 *
 * A program to display a random path across a 10x10 array
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

int main(void){

	int i, j, k, direction, new_i, new_j, moves;

	char board[ROWS][COLS], character = 'A';	
	const char pathOptions[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z'};

	srand((unsigned) time(NULL));

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			board[i][j] = '.';
		}
	}

	i = 0;
	j = 0;
	k = 0;
	moves = 0;
	//sets the start
	board[i][j] = pathOptions[0];

	while(moves < 4 && character <= 'z'){

		switch((direction + i) % 4){
			case 0: new_i = i; new_j = j + 1; break;
			case 1: new_i = i; new_j = j - 1; break;
			case 2: new_i = i + 1; new_j = j; break;
			case 3: new_i = i - 1; new_j = j; break;
		}
		if(new_i >= 0 && new_i < COLS && new_j >= 0 && new_j < ROWS && board[new_i][new_j] == '.'){
			i = new_i;
			j = new_j;
			board[i][j] = pathOptions++;
			direction = rand() % 4;
			moves = 0;
		}
		else{
			moves++;
		}
	}

	for(i = 0; i < COLS; i++){
		for(j = 0; j < ROWS; j++){
			printf("%c", board[i][j]);
			printf("\n");
		}
	}
	return 0;

}










