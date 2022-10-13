/*A program that accepts 3 numbers, passes them to a function that sums the best 2. */
#include <stdio.h>
int sum(int a,int b,int c)
{
	int sm;
	while(a>b&&a>c&&b>c||b>a&&b>c&&a>c)
	{
		sm=a+b;
		break;
	}
	while(a>b&&a>c&&c>b||c>a&&c>b&&a>b)
	{
		sm=a+c;
		break;
	}
	while(b>a&&b>c&&c>a||c>b&&c>a&&b>a)
	{
		sm=b+c;
		break;
	}
	return (sm);
}
int main()
{
	int num[3],i,j;
	for(i=0;i<3;i++)
	{
		j=i+1;
		printf("Enter num%d:\n",j);
		scanf("%d",&num[i]);
	}
	printf("Sum of the best 2 is %d",sum(num[0],num[1],num[2]));
	return 0;
}
