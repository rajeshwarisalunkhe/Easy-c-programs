// 21 program to add digit of a given number

#include <stdio.h>

int main(void)
{
	int num, mod, add = 0;
	
	printf("enter number of which digit to be add:");
	scanf("%d",&num);

	// adding digit one by one
	while(num / 10 != 0)
	{
		mod = num % 10;
		num = num / 10;
		add = add + mod;
	}
	printf("addition of digit is %d\n",add + num);

}
