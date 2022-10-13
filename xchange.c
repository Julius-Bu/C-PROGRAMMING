#include <stdio.h>
int main()
{
	int ushs;
	float dollars;
	const int rate=3600;
	printf("UGX-DOLLAR XCHANGE.\n");
	printf("please enter amount in Ushs:");
	scanf("%d",&ushs);
	dollars=ushs/rate;
	printf("With the rate of UGX%d,\nUshs%d/= are equal to %.3fdollars\n\n",rate,ushs,dollars);
	return 0;
}
