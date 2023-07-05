#include <stdio.h> // Pendiente

int main()

{
	int positiveInteger, multiplier, factorial = 1, convention = 1;

	scanf("%i", &positiveInteger);

	while(positiveInteger < 0 || positiveInteger > 12)
	{
		scanf("%i", &positiveInteger);
	}

	if(positiveInteger == 0 || positiveInteger == 1)
	{
		printf("%i", convention);
	}
	else
	{
		for(multiplier = 2; multiplier <= positiveInteger; multiplier++)
		{
			factorial = factorial * multiplier;
		}
		printf("%i", factorial);
	}

	return 0;
}