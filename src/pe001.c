/*----------------------
 * Problem 001
 * Multiples of 3 and 5
 * Author: Jocelyn
 * Github: jocelyn-gh/Project-Euler 
 *---------------------*/

/*-----------------------
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *----------------------*/
#include <stdio.h> 

int main(void)
{
    int MaxNumberTarget = 1000; //1000 max number multiples must be under
    int arrayNatrualMultiples[] = {3,5}; //3,5 array of all the multiples
    int sum = 0;
    for (int i = 0; i < MaxNumberTarget; i++) {
        for (int k=0; k < sizeof(*arrayNatrualMultiples); k++){
            if(i % arrayNatrualMultiples[k] == 0){ 
                sum += i;
                break;
            }              
        }
    }
    printf("total sum = %d\n", sum);
    return 0;
}
