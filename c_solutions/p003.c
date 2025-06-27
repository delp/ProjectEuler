#include <stdio.h>
#include "utils.h"
#include <limits.h>

int main() {

	long num = 600851475143;

	long index = 2;

	while(!isPrimeLong(num)) {
		if(isFactorLong(index, num)) {
			printf("%ld is a factor of %ld\n", index, num);
			num = num / index;
			printf("num is now %ld\n", num);

		} else {
			index++;
		}
	}
	return 0;
}
