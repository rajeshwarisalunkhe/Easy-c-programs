// 32 program to find lcm
int hcf(int x, int y);

#include <stdio.h>

int main(void)
{
	int first, second, lcm;

	printf("enter two numbers:");
	scanf("%d %d", &first, &second);

	// prime factorization method
	lcm = (first * second) / hcf(first, second);

	printf("lcm is %d\n", lcm);
}

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
