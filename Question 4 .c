#include <stdio.h>
int main()
{
	float temp;
	printf("Please enter your temperature: ");
	scanf("%f", &temp);
	if (temp>0.0)
		printf("Your temperature is above the freezing point.");
	else if (temp<0.0)
		printf("Your temperature is under the freezing point.");
	else
		printf("Your temperature on the freezing point.");
	
	
	return 0;
}
