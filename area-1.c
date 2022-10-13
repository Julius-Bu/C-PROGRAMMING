#include <stdio.h>
int main()
{
	float r,a,c;
	const float pi=3.141;
	printf("Getting area and circumference, please enter;");
	printf("\nradius:");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("\nArea is %.3f square units",a);
	printf("\nCircumference is %.3f units",c);
	return 0;
}
