#include <stdio.h>
#include "utils.h"

int main() {

	long num = 600851475143;
	
	long index;
	for(index = 1; index < num; index++) {
		if(isFactorLong(index, num)) {
			if(isPrimeLong(index)) {
				printf("%ld is ***prime***\n",index);
			} else {
				printf("%ld is NOT prime\n",index);
			}
		}
	}

	return 0;
}
