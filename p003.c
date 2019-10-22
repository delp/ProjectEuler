#include <stdio.h>
#include "utils.h"

//THE WAY TO MAKE THIS FASTER IS TO JUST IMAGINE MAKING THE NUMBER SMALLER
//AS YOU TRY FACTORS, LIKE THIS
//        120
//      /     \
//     2      60
//           /  \ 
//         6    10
//       /  \  /   \
//      2   3 2     5

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
