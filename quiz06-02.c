/** quiz06-02.c
* ===========================================================
*    Name: David Petzold
* Section: T6/7
* Purpose: Quiz 6
* ===========================================================
*/

#include <stdio.h>

double avgOfDoubles(double array[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum / size;
}

int main(void){

    double dailyHighTemp[] = { 63.0, 64.5, 78.1, 80.9, 76.2, 79.0, 82.1 };
    printf("the average daily high for this week is %f", avgOfDoubles(dailyHighTemp, 7));
    return 0;

}