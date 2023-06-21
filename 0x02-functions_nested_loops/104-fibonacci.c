#include <stdio.h>

int main() {
	int prev = 1;
	int current = 2;
	int count = 2;

	printf("%d, %d, ", prev, current);

	while (count < 98) {
		int next = prev + current;
		count++;

		printf("%d", next);

		if (count < 98) {
			printf(", ");
		}

		prev = current;
		current = next;
	}

	printf("\n");

	return 0;
}
