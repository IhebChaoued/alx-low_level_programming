#include <stdio.h>

int main() {
	long long prev = 1;
	long long current = 2;
	int count = 2;

	printf("%lld, %lld, ", prev, current);

	while (count < 98) {
		long long next = prev + current;
		count++;

		printf("%lld", next);

		if (count < 98) {
			printf(", ");
		}

		prev = current;
		current = next;
	}

	printf("\n");

	return 0;
}

