// 33 Write a program to find hcf of two numbers

#include <stdio.h>

int hcf(int x, int y);

int main(void)
{
	int first, second;

	printf("enter two numbers:");
	scanf("%d %d", &first, &second);

	if(first > 0 && second > 0)
	{
		
	printf("HCF is %d",hcf(first,second));
	}
	else
	{
		printf("please enter both positive number\n");
	}

	
	
	
}

// hcf of two numbers is the largest positive divisior of that two numbers
int hcf(int x, int y)
{ 
	if(y!=0)
	return hcf(y,x%y);
	else
	return x;
}

