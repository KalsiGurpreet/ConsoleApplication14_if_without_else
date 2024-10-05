#include<stdio.h>
int main(void)
{
	float number = 0.0;

	puts("Please enter the number");
	scanf_s("%f", &number);

	int i;
	i = (int)number;

	printf("Value of i after conversion is %d\n", i);

	if (i>=1)
		if(i<2)
	{
		puts("Very Bad.");  // < is less than - high priority than > is greater than.
	}
	if (i>=2)
		if(i<3)
	{
		puts("Bad.");
	}
	if (i>=3)
		if(i<4)
	{
		puts("Neutral.");
	}
	if (i>=4)
		if(i<5)
	{
		puts("Good.");
	}

	if (i>=5)
		if(i<6)
	{
		puts("Very good.");
	}
	if (i > 6)
		puts("Out of range.");
	if (i < 1)
		puts("Out of range.");
	
	return 0;
}