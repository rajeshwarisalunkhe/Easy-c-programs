// 08 program to print number from 100 to 1

#include <stdio.h>

int main(void)
{
	int i;

	for(i = 100;i >= 1;i--)
	{
		// adjusting rows in compiling window		
		if(i % 10 == 0)
		printf("\n");

		printf("%d\t",i);
		
	}
}
