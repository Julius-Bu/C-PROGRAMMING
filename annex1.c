//BLESSED.C
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Please enter the number of levels to be printed here:");
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		for(c=b;c<a;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	b--;
	for(d=b;d>0;d--)
	{
		for(e=d;e<=a;e++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
