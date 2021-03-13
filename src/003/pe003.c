/*----------------------
 * Problem 003
 * Prime Factorization
 * Author: Jocelyn
 * Github: jocelyn-gh/Project-Euler 
 *---------------------*/

/*
 * Looked at https://www.tutorialspoint.com/c-program-for-find-largest-prime-factor-of-a-number for help
 * Arnab Chakraborty
 */


/*-----------------------
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *----------------------*/
#include <stdio.h> 
#include <math.h>

unsigned long int getLargestPrimeFactor(unsigned long int number){

    int largestPrime = 0;

    while (number % 2 == 0) {
        number /= 2; 
    }
        
    for (int i = 3; i <= (unsigned long int)sqrt(number); i += 2) {
        while (number % i == 0) {
            largestPrime = i;
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
    unsigned long int number = 600851475143;
    printf("Largest prime factor of the number %lu is %lu\n", number, getLargestPrimeFactor(number));
    return 0;
}
