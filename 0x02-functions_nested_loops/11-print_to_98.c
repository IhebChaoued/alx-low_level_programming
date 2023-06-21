#include <stdio.h>

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	print("\n");
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	print_to_98(n);

	return (0);
}
