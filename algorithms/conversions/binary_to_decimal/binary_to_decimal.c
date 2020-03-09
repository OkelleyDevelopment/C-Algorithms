/**
 * A program to convert a binary number to decimal (base 10)
 *
 * Author: Nicholas O'Kelley
 */


#include <stdio.h>

int main(){

	int remainder;
	int number = 0;
	int decimal_number = 0;
	int temp = 1;

	printf("\nEnter any binary number: ");
	scanf("%d", &number);

	while(number > 0){

		remainder = number % 10;
		number = number / 10;
		decimal_number += remainder * temp;
		// A power of two
		temp = temp * 2;

	}

	printf("%d\n", decimal_number);
}

