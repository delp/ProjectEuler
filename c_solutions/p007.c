/*Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include "utils.h"


int main() {


	int primesFound = 0;

	int i = 0;
	while(primesFound < 10001) {

		if(isPrime(i)) {
			primesFound++;
			printf("Prime Found: %d, %d so far\n", i, primesFound);
		}
		i++;
	}

	return 0;
}
