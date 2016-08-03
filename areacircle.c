// 06 program to find area of circle

#include <stdio.h>

int main(void)
{
	float radius, area;
	
	printf("enter radius of circle:");
	scanf("%f",&radius);

	// formula to calculate area
	area = 3.14 * radius * radius;
	printf("area of circle is %f\n",area);
}
