#include <stdio.h>
/**
 * Function to print all numbers from the given number to 98.
 * @param n The starting number.
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
	}
}

int main()
{
	int start_num;
	printf("Enter starting num: ");
	scanf("%d", &start_num);
	print_to_98(start_num);

	return (0);
}
