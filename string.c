// 03 program to accept a string from user and print it

#include <stdio.h>

int main(void)
{
	char string[10];

	printf("please enter something:");
	scanf("%s",string);
	printf("you entered %s\n",string);
}
