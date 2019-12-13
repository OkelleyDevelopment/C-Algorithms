#include <stdio.h>

// An example of how to print an integer given by the user.
int main(){
	
	int number;

	printf("Enter an integer: ");

	//reads and stores input
	scanf("%d", &number);

	//displays output
	printf("You entered: %d", number);
	printf("\n");

	return 0;
}

