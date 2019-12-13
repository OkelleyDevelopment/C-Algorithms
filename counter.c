#include <stdio.h>

int main(void)
{
    int counter = 1;

    while (counter <= 1000000)
    {
        printf("%d\n", counter);
        counter++;
    }
}
