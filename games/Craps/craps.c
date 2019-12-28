/*
 * Simulates the game of Craps.
 *
 * Author: Nicholas O'Kelley
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool play_game();

int main(void){

	int wins = 0;
	int losses = 0;

	char answer;

	bool result;
	

	do{
	
		result = play_game();

		if(result == true){
			wins++;
		}
		else{
			losses++;
		}
		
		printf("\nPlay again? ");
		scanf(" %c", &answer);
				
		if(answer != 'y' || answer != 'Y'){
			printf("\nWins: %i  Losses: %i\n", wins, losses);
		}


	}while(answer == 'y' || answer == 'Y');

return 0;
}

bool play_game(){

	int roll_dice(int a, int b);

	srand(time(NULL));

	int point;

	int die_1, die_2, die_3, die_4, roll, roll_2;

	die_1 = roll_dice(1, 6);
	die_2 = roll_dice(1,6);
	roll = die_1 + die_2;
	point = die_1 + die_2;
	
	printf("\nYou rolled:  %i", roll);
	printf("\nYour point is %i\n", point);

	if(roll == 7 || roll == 11){
		printf("You win!\n");
		return true;
	}
	else if(roll == 2 || roll == 3 || roll == 12){
		printf("You Lose...\n");
		return false;
	}
	else {

		do{
			die_3 = roll_dice(1,6);
			die_4 = roll_dice(1,6);
			roll_2 = die_3 + die_4;
			
			printf("You rolled a %i\n", roll_2);
			
			if(roll_2 == point){
				printf("You win!\n");
				return true;
			}
			
			//else if(roll_2 == 7){
			//	printf("You lose!");
			  //     	return false;	
			//}

		}while(roll_2 != 7);
		
		printf("You Lose...\n");
		return false;

	}
}

int roll_dice(int a, int b){
	return rand() % (b - a + 1) + a;
}







