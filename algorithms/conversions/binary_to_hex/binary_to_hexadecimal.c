/**
 * Simple program to Convert Binary to Hexadecimal
 *
 * Feb. 5, 2020
 */

#include <stdio.h>

int main(){
	
	long int binary, hex = 0; 
	int i = 1;
        long int remainder;

	printf("Enter the binary number: ");
	scanf("%ld", &binary);

	while(binary != 0){

		remainder = binary % 10;
		hex = hex + remainder * i;
		i = i * 2;
		binary = binary / 10;
	}

	printf("The hexadecimal: %lX\n", hex);
	
	return 0;
}



