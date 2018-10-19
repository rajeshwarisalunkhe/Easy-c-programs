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
	int quotient, remainder = 1;

	// according to euclid division algorithm one no can be expressed in form of another no as follows
	// dividend = (divisor * quotient) + remainder
	// applying division algorithm to divisor and remainder again treating divisor as dividend and remainder as divisor
	// until remainder is zero and when the remainder is zero the hcf is divisor at that stage
	while( remainder > 0)
	{
		quotient = x / y;
		remainder = x - (quotient * y);
		
		// hcf is y which is a divisior when remainder is zero
		x = y;
		y = remainder;
	}
			
	return x;
}

