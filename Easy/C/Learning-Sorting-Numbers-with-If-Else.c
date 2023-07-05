#include <stdio.h> // Pendiente

int sorting(int number1, int number2, int number3) 
{
	if (number1 < number2 && number2 < number3)
	{
		printf("%i %i %i\n", number1, number2, number3);
	}

	else if (number1 < number3 && number3 < number2)
	{
		printf("%i %i %i\n", number1, number3, number2);
	}

	else if (number3 < number1 && number1 < number2)
	{
		printf("%i %i %i\n", number3, number1, number2);
	}

	else if (number2 < number3 && number3 < number1)
	{
		printf("%i %i %i\n", number2, number3, number1);
	}

	else if (number3 < number2 && number2 < number1)
	{
		printf("%i %i %i\n", number3, number2, number1);
	}

	else
	{
		printf("%i %i %i\n", number3, number2, number1);
	}

	return 0;
}

int main()
{
	int number1, number2, number3;

	scanf("%i" "%i" "%i",&number1, &number2, &number3);

	while (number1 < 0 || number1 > 500 || number2 < 0 || number2 > 500 || number3 < 0 || number3 > 500)
	{
		scanf("%i" "%i" "%i",&number1, &number2, &number3);
	}
	
	sorting(number1, number2, number3);

	return 0;
}