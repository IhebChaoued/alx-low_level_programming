#include stdio.h
/**
 * main - print the size of types
 *
 * Return: 0 indicate success.
 */
int main (void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));

	return (0);
}
