// 32 program to find lcm of two numbers

#include <stdio.h>

int main(void)
{
	int first, second, lcm, ans, i, start;

	printf("enter two numbers:");
	scanf("%d %d", &first, &second);
	
	if(first < 0 || second < 0)
	{
		printf("please enter positive number\n");
	}
	else
	{
		// multiplyin two numbers to get a number which is divisible by both 
		ans = first * second;
		if(first > second)
		{
			start = first;
		}
		else
		{
			start = second;
		}
			
		for(i = start; i <= ans ; i++)
		{
			// condition to check any number which is divisible by both numbers
			if(i % first  == 0 && i % second == 0)
			{
				lcm = i;
				break;
			}
		}

		printf("lcm is %d\n", lcm);
	
		
	}
}
