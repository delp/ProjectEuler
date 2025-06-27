#include <stdio.h>
#include "utils.h"

int main() {


	//build list of 3 digit number products
	struct LL* list = newLinkedList();
	int i, j;
	for(i = 100; i < 1000; i++) {
		for(j = 100; j < 1000; j++) {
			addNumber(list, i*j);
		}
	}

	struct LL* palindromes = getPalindromesFromSeries(list);

	int largest = getLargestFromSeries(palindromes);

	printf("Largest: %d\n", largest);

	return 0;
}
