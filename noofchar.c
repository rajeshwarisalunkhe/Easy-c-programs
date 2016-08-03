// 10 program to accept string and  find no of characters in string

#include <stdio.h>

int main(void)
{
	// declaration of variable
	int i, counter = 0;
 	char string[100];

	printf("enter string:");
	scanf("%s",string);

	// loop for measuring characters
	for(i = 0;string[i] != '\0';i++)
	{
		counter++;
	}
	printf("no of characters is %d\n",counter);
}
