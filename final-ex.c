//A C program for it
#include <stdio.h>
int sum(int x[])
{
	int j,s=0;
	for(j=0;j<4;j++)
	{
		s=s+x[j];
	}
	return (s);
}
int main()
{
	int num[4],a,b;
	float avg;
	printf("\nIf you want to sum up 4 numbers;");
	for(a=0;a<4;a++)
	{
		b=a+1;
		printf("\nPlease enter number %d : ",b);
		scanf("%d",&num[a]);
	}
	avg=sum(num)/a;
	printf("\nThe average of your %d numbers is %.2f",a,avg);
	return 0;
}
