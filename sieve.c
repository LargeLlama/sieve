#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int n){
  int length  = (int)(log(n + 1) * 1.15 * (n + 1));
  int * primes = malloc(sizeof(int) * length);
  int c = 1;
  int i , b;

  for(i = 2; i < length; i++){
    primes[i] = 1;
  }

  for (int i = 2; i < length; i++){
        if (primes[i] ){
            for (b = i; i*b<length; b++)
                primes[i * b] = 0;
        }
    }

    for (int i = 2; i < length; i++){
       if ( primes[i] )
	   {
           c++;
           if(c==n)
		   {
             return i;
           }
	   }
	}
	free(primes);
	return i;
}
