/** quiz06-01.c
* ===========================================================
*    Name: David Petazold
* Section: T 6/7
* Purpose: Quiz 6
* ===========================================================
*/

#include <stdio.h>

void hoursMinutes(int minutes, int *hours, int *minutesRemainder){
    *hours = minutes / 60;
    *minutesRemainder = minutes % 60;
}

int main(void){
    int time, hours, minutes;
    int* hoursptr = &hours;
    int* minutesptr = &minutes;
    printf("enter a number of minutes to be converted: ");
    scanf("%d", &time);
    hoursMinutes(time, hoursptr, minutesptr);
    printf("%d minutes is equivalent to %d hours, and %d minutes", time, hours, minutes);
    return 0;
}