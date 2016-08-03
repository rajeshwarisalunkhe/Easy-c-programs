// 07 program to print number from 1 to 100

#include <stdio.h>

int main(void)
{
	int i;

	for(i = 1;i <= 100;i++)
	{
		printf("%d\t",i);
	
		// adjusting rows in compiling window		
		if(i % 10 == 0)
		{
			printf("\n");
		}
		
	}
}
