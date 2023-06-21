#include <stdio.h>

void printFibonacciSequence(int n) {
	unsigned long long prev = 1;
	unsigned long long current = 2;

	printf("%llu, %llu, ", prev, current);

	for (int i = 3; i <= n; i++) {
		unsigned long long next = prev + current;

		if (i < n) {
			printf("%llu, ", next);
		} else {
			printf("%llu\n", next);
		}

		prev = current;
		current = next;
	}
}

int main() {
	int n = 98;  // Number of Fibonacci numbers to generate

	printFibonacciSequence(n);

	return (0);
}
