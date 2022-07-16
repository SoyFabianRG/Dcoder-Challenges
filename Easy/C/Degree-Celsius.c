#include <stdio.h>

int main()
{
    int celsius, fahrenheit;
    printf("");
    scanf("%i",&celsius);
    
    fahrenheit = (9 * celsius)/5 + 32;
    printf("%i", fahrenheit);
    
	return 0;
}