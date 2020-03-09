/**
 * A small program that provides a solution to the Towers of Hanoi problem.
 *
 * @author Nicholas O'Kelley
 *
 * @version March 2, 2020
 */

#include <stdio.h>


/**
 * The logic handling function of the program. 
 *
 * @param from - where the disk was
 *
 * @param to - where the disk is going
 *
 * @param other - the pin not being used
 *
 * @param n - the number of disks to move
 */
void hanoi(char from, char to, char other, int n){

    if(n == 1){
        printf("Move disc from %c to %c\n", from, to);
    }else{
        //move the n-1 smallest disks from A to B
        hanoi(from, other, to, n - 1);
        //move the largest disk from A to C
        hanoi(from, to, other, 1);
        //mvoe the n-1 smallest disks from B to C
        hanoi(other, to, from, n-1);
    }
}

/**
 * Prompts the user for the number of disks and then scans that value in. THen
 * runs the program.
 *
 * @returns zero or negative one based on the program success or failure
 */
int main(){

    int n;

    printf("\nInput the number  of disks: ");
    scanf("%d", &n);

    if(n <= 0){
        
        printf("Invalid number!\n");
        return -1;

    }else{

        hanoi('a','c','b', n);
        return 0;
    }
}
