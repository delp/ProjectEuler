#include <stdio.h>
#include <stdlib.h>

int is3or5(int a) {
	int result = 0;

	if( (a % 3) == 0) {
		result = 1;
	}
	if( (a % 5) == 0) {
		result = 1;
	}

	return result;
}

int isEven(int a) {
	return !(a % 2);
}

int isPrime(int a) { 
	int i;
	int result = 1;

	for(i = 2; i < a; i++) {
		if( (a % i) == 0 ) {
			result = 0;
		}
	}
	if(a == 0 || a == 1) {
		result = 0;
	}

	return result;
}

long isPrimeLong(long a) { 
	long i;
	long result = 1;

	for(i = 2; i < a; i++) {
		if( (a % i) == 0 ) {
			result = 0;
		}
	}
	if(a == 0 || a == 1) {
		result = 0;
	}

	return result;
}

int isFactorLong(long a, long b) {
	return (b % a == 0);
}

int isFactor(int a, int b) {
	return (b % a == 0);
}

struct node {
	int data;
	struct node* next;
};

struct LL {
	struct node* head;
	struct node* end;
};


struct node* getIntAsNode(int a) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = a;

	return newNode;
}

struct LL* newLinkedList() {
	struct LL* newList = malloc(sizeof(struct LL));
	newList->head = NULL;
	newList->end= NULL;

	return newList;
}

int addNode(struct LL* list, struct node* item) {
	if(list->head == NULL) {
		list->head = item;
		list->end = list->head;
	} else {
		list->end->next = item;
		list->end = list->end->next;
	}

	return 0;
}

int addNumber(struct LL* list, int a) {
	struct node* myNode = getIntAsNode(a);
	addNode(list, myNode);

	return 0;
}

void printList(struct LL* list) {
	if(list->head != NULL) {
		struct node* walker = list->head;
		printf("%d ", walker->data);
		while(walker->next != NULL) {
			walker = walker->next;
			printf("%d ", walker->data);
		}
		printf("\n");
	}
}

struct LL* buildFibonacciUpTo(int max) {
	struct LL* list = newLinkedList();

	int a = 1;
	int b = 2;

	addNumber(list, a);

	while(b < max) {
		addNumber(list, b);
		int c = a + b;
		a = b;
		b = c;
	}


	return list;
}

int sumSeries(struct LL* list) {

	int sum = 0;
	struct node* walker = list->head;
	if(walker != NULL) {
		sum = sum + walker->data;
		while(walker->next != NULL) {
			walker = walker->next;
			sum = sum + walker->data;
		}
	}
	return sum;
}

int reverseInt(int a) {
	int r = 0;
	int orig = a;	

	while(a != 0) {
		int remain = a%10;
		r = r*10 + remain;
		a = a / 10;
	}

	return r;
}

int isPalindrome(int a) {
	int r = reverseInt(a);

	return (a == r);

}

struct LL* getPalindromesFromSeries(struct LL* list) {
	struct LL* even = newLinkedList();

	struct node* walker = list->head;
	if(walker != NULL) {
		if(isPalindrome(walker->data)) {
			addNumber(even, walker->data);
		}
		while(walker->next != NULL) {
			walker = walker->next;
			if(isPalindrome(walker->data)) {
				addNumber(even, walker->data);
			}
		}
	}

	return even;
}

//This is really cool! build a list from another list, selecting
//only nodes that cause the comparison funtion 'compare()' to return
//true! it's a function pointer!!!!
struct LL* getKindFromSeries(struct LL* list, int (*compare)(int) ) {
	struct LL* kind = newLinkedList();
	
	struct node* walker = list->head;
	if(walker != NULL) {
		if(compare(walker->data)) {
			addNumber(kind, walker->data);
		}
		while(walker->next != NULL) {
			walker = walker->next;
			if(compare(walker->data)) {
				addNumber(kind, walker->data);
			}
		}
	}

	return kind;
}

int getLargestFromSeries(struct LL* list) {
	int largest = 0;

	struct node* walker = list->head;
	if(walker != NULL) {
		if(walker->data > largest) {
			largest = walker->data;
		}
		while(walker->next != NULL) {
			walker = walker->next;
			if(walker->data > largest) {
				largest = walker->data;
			}
		}
	}
	
	return largest;
}
