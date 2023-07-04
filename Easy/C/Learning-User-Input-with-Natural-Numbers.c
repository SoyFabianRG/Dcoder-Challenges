#include <stdio.h>

int main()
{
	int suma, i, n;
	printf("");
	scanf("%i",&n);

	suma = 0;
	i = 1;

	while(i<=n)
	{
		suma = suma + i;
		i++;
	}

	printf("%i",suma);

	return 0;
}