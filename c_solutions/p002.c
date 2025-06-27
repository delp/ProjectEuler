#include <stdio.h>
#include "utils.h"

int main() {

	struct LL* fibo = buildFibonacciUpTo(4000000);

//	struct LL* even = getEvenFromSeries(fibo);
	struct LL* even = getKindFromSeries(fibo, &isEven);

	int sum = sumSeries(even);

	printf("%d\n",sum);

	return 0;
}
