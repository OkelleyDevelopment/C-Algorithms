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

	int i, j, k, direction;

	char grid[ROWS][COLS];

	const char pathOptions[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	srand((unsigned) time(NULL));

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			grid[i][j] = '.';
		}
	}

	i = 0;
	j = 0;
	k = 0;

	//sets the start
	grid[i][j] = (char) 'A' + k;
	k++;	
	while(k < 26){
		
		direction = rand() %  4;

		switch(direction){
			//Move Right
			case 0: if(j < ROWS - 1 && grid[i][j + 1] == '.'){
				       	grid[i][j + 1] = (char) 'A' + k;
					k++; j++;
				}	
				break;

			//Move down
			case 1: if(grid[i + 1][j] == '.'){
					grid[i + 1][j] = (char) 'A' + k;
					k++; i++;
				}

				break;
			//Move up
			case 2: if(grid[i-1][j] == '.'){
					grid[i-1][j] = (char) 'A' + k;
					k++; i--;
				}
				break;
			//Move left
			case 3: if(grid[i][j-1] == '.'){
					grid[i][j-1] = (char) 'A' + k;
					k++; j--;
				}
				break;
		}
	}

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			printf("%4c", grid[i][j]);
		}
		printf("\n");
	}
	return 0;
}










