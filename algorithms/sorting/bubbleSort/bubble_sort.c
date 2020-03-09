/*
 * Small implementation of the Bubble sort algorithm
 *
 * Author: Nicholas O'Kelley
 */

#include <stdio.h>

void bubble_sort(int arr[], int num){

	int i, j, k, temp;

	printf("The unsorted array: ");
	for(k = 0; k < num; k++){
		printf("%5d", arr[k]);
	}

	for (i = 1; i < num; i++) {
      	    for (j = 0; j < num - 1; j++) {
                if (arr[j] > arr[j + 1]) {
            	    temp = arr[j];
                    arr[j] = arr[j + 1];
            	    arr[j + 1] = temp;
         }
      }
     
	 // we can comment this out if we after testing
     	 printf("\nAfter pass %d : ", i);
      	 for (k = 0; k < num; k++) {
         printf("%5d", arr[k]);
      }
   }
}


int main(void){
	int arr[30], num, i;

	printf("Enter number of elements: ");
	scanf("%d", &num);

	printf("\nEnter array elements: ");
	for(i = 0; i < num; i++){
		scanf("%d", &arr[i]);
	}

	bubble_sort(arr, num);
	printf("\n");

}
