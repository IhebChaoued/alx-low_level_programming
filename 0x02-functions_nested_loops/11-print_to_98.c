#include <stdio.h>

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", n);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	print("\n");
}

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	print_to_98(number);

	return (0);
}
