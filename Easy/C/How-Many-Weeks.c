#include <stdio.h> // Pendiente
int main()
{
	int gallonsWater = 10000, waterWeeklyConsumption, weekDuration;
	scanf("%i", &waterWeeklyConsumption);

	while(waterWeeklyConsumption < 0 || waterWeeklyConsumption > 1000)
	{
		scanf("%i", &waterWeeklyConsumption);
	}

	weekDuration = gallonsWater / waterWeeklyConsumption;
	printf("%i", weekDuration);

	return 0;
}