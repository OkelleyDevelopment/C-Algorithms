/*
 * Author: Nicholas O'Kelley
 *
 * Simulates an n X n magic square
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	printf("\nWelcome to the Magic Square Generator!\n");
	printf("The size must be an ODD number between 1 and 99\n");

	int n;
	
	printf("Enter size of the square: ");
	scanf("%d", &n);
		
	printf("You entered %d\n", n);


	int grid[n][n];

	int x = 1;
	int row;
	int col;
	
	for(row = 0; row < n; row++){
		for(col = 0; col < n; col++){
			grid[row][col] = 0;
		}
	}

	row = n - 1;
	col = (n - 1)/2;

	for(x = 1; x <= n * n; x++){

		if(grid[row][col] == 0){
			grid[row][col] = x;
		}

		row -= 2;/* move up two*/
		//Wrap to bottom if needed
		if(row < 0){
			row += n;
		}
	
		col = (col + 1) % n; /*move right 1*/

		if(grid[row][col] > 0){
			row = (row + 1) % n;
			col -= 1;
			if(col < 0){
				col += n;
			}
		}
	}

	int sum = 0;

	for(row = 0; row < n; row++){
		for(col = 0, sum =0; col < n; col ++){
			sum += grid[row][col];
		}
	}

	for(row = 0; row < n; row++){
		for(col = 0; col < n; col++){
			printf("%4d", grid[row][col]);
			//putchar('\n');
		}
		putchar('\n');
	}
}

