#include <stdio.h>

int main() {
	unsigned long prev = 1;
	unsigned long current = 2;
	int count = 2;

	printf("%lu, %lu, ", prev, current);

	while (count < 98) {
		unsigned long next = prev + current;
		count++;

		printf("%lu", next);

		if (count < 98) {
			printf(", ");
		}

		prev = current;
		current = next;
	}

	printf("\n");

	return 0;
}

