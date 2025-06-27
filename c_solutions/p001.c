#include <stdio.h>
#include "utils.h"

int main() {
	int i;
	int sum = 0;
	for(i = 0; i < 1000; i++) {
		if(is3or5(i)) {
			sum = sum + i;
		}
	}

	printf("%d\n", sum);

	return 0;
}
