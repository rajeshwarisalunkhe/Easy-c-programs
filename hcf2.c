// 33 Write a program to find hcf of two numbers

#include <stdio.h>

int hcf(int x, int y);

int main(void)
{
	int first, second, temp;

	printf("enter two numbers:");
	scanf("%d %d", &first, &second);

	if(first > 0 && second > 0)
	{
		
		if(first > second)
		{
			printf("hcf is %d\n", hcf(first, second));
		}
		else
		{

			printf("hcf is %d\n", hcf(second, first));
		}
	}
	else
	{
		printf("please enter both positive number\n");
	}

	
	
	
}

// hcf of two numbers is the largest positive divisior of that two numbers
int hcf(int x, int y)
{
	int quotient, reminder = 1;

	// according to euclid division algorithm one no can be expressed in form of athor no as follows
	// dividend = (devisor * quotient) + reminder
	// applying division algorithm to devisor and reminder again treating devisor as dividend and reminder as divisor
	// until reminder is zero and when the reminder is zero the hcf is devisor at that stage
	while( reminder > 0)
	{
		quotient = x / y;
		reminder = x - (quotient * y);
		
		// hcf is y which is a devisior when reminder is zero
		x = y;
		y = reminder;
	}
			
	return x;
}

