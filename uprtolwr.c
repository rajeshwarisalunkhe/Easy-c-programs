// 13 program to convert upper case to lower case

#include <stdio.h>

int main(void)
{
	char string[100],i;	
	printf("enter in uppercase letter:");

	for(i = 0; string[i] != '\0';i++)
	{	
		scanf("%c",&string[i]);
	}
	for(i = 0;string[i] != '\0';i++)
	{
		printf("%c",string[i] + 32); 
	}
	printf("\n");
}
