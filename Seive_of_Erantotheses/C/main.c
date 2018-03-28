#include <stdio.h>
#include <stdlib.h>
#define MAX 60000

int main()
{
    int isPrime[MAX+1], i, j;
    for (i = 2; i <= MAX; i++){
        isPrime[i] = 1;
    }
    for (i = 2; i*i <= MAX; i++){
        if (isPrime[i] == 1){
            for (int j = i; i*j <= MAX; j++){
                isPrime[i*j] = 0;
            }
        }
    }

    int primes = 0;
    for (i = 2; i <= MAX; i++){
        if (isPrime[i]){
            primes++;
            printf ("\n%d, ", i);
        }
    }

    printf ("\n:::\n");
    printf ("The Number of Primes till %d are %d", MAX, primes);
    return 0;
}
