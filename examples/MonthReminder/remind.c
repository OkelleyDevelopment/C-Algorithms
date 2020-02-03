/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){

	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1];

	int day, i, j, num_remind = 0;

	for(;;){
		if(num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}

		printf("Enter day and remind: ");
		scanf("%2d", &day);
		if(day == 0){
			break;
		}

		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);

		for(i = 0; i < num_remind; i++){
			if(strcmp(day_str, reminders[i]) < 0){
				break;
			}
		for(j = num_remind;
	}
