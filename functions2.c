/*A program that accepts 3 numbers, stores in an array, sums them and passes the sum to a function that converts the sum to 40 */
#include <stdio.h>
int convert(int sum)
{
	sum=40;
	return (sum);
}
int main()
{
	int num[3],s=0,i,j;
	for(i=0;i<3;i++)
	{
		j=i+1;
		printf("Enter num%d:\n",j);
		scanf("%d",&num[i]);
		s=s+num[i];
	}
	printf("Their sum is %d\n", s);
	printf("converted to %d",convert(s));
	return 0;
}
