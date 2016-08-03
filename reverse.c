// 22 program to reverse digit of a given number

#include <stdio.h>

int main(void)
{
	int num, mod, i = 0,number[10],j = 0;
	
	printf("enter number of which digit to be reverse:");
	scanf("%d",&num);

	// adding digit one by one
	while(num / 10 != 0)
	{
		mod = num % 10;
		num = num / 10;
		number[i] = mod;
		i++;
		
	}
	number[i] = num;
	for (j = 0;j <= i ;j++)
	{
		printf("%d",number[j]);
	}
	printf("\n");
	
}
