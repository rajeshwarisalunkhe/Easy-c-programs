/* 30 Write a program to find wheather the string is anagram or not
Anagram in c: c program to check whether two strings are anagrams or not, string is assumed to consist of alphabets only. Two words are said to be anagrams of each other if the letters from one word can be rearranged to form the other word. From the above definition it is clear that two strings are anagrams if all characters in both strings occur same number of times. For example "abc" and "cab" are anagram strings, here every character 'a', 'b' and 'c' occur only one time in both strings. Our algorithm tries to find how many times characters appear in the strings and then comparing their corresponding counts.*/


#include <stdio.h>

int anagram (char a[], char b[]);
int counter(char a[], int first[]);
int main(void)
{
	
	char a[100], b[100],flag;

	printf("enter first string:");
	scanf("%s", a);

	printf("enter second string:");
	scanf("%s", b);
	
	flag = anagram(a, b);
	if (flag == 0)
	{
		printf("%s and %s are anagram\n", a,b);
	}
	if (flag == 1)
	{
		printf("%s and %s are not anagram\n", a,b);
	}

}

int anagram (char a[], char b[])
{
	int c, f[26] = {0},s[26] = {0};
	counter(a, f);
	printf("\t");	
	counter(b, s); 
		
	for(c = 0;c < 26;c++)
	{
		if(f[c] != s[c])
		{	
			return 1;
		}

	}
	return 0;

}

int counter(char array[], int first[])
{

	int c = 0; 

	while(array[c] != '\0')
	{
		first[array[c] - 'a'] = first[array[c] - 'a'] + 1;
		c++;
	} 
	
}
