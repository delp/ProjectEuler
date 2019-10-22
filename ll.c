#include <stdio.h>
#include "utils.h"

int main() {

	struct LL* list = newLinkedList();

	addNumber(list, 20);

	addNumber(list, 45);
	addNumber(list, 9);

	printList(list);

	return 0;
}
