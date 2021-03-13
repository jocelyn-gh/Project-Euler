/*----------------------
 * Problem 003
 * Prime Factorization
 * Author: Jocelyn
 * Github: jocelyn-gh/Project-Euler 
 *---------------------*/

/*-----------------------
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *----------------------*/
#include <stdio.h> 
#include <math.h>

int getLargestPrimeFactor(int number){

    int largestPrime = 0;

    while (number % 2 == 0) {
        number /= 2; 
    }
    
    for (int i = 3; i <= (int)sqrt(number); i += 2) {
        while (number % i == 0) {
            largestPrime = i;
            printf("prime = %d \n", number);
            number /= i;
       } 
    }

    if (number > 2) {
        largestPrime = number;
    }
       
    return largestPrime;    
}

int main()
{
    int number = 13195;
    printf("Largest prime factor of the number %d is %d\n", number, getLargestPrimeFactor(number));
    return 0;
}
