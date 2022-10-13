#include <stdio.h>
int main()
{
	int sp, bp, pr;
	printf("PROFIT-Calculator.\n-----------------------------\n");
	printf("Please enter;\nselling price:");
	scanf("%d",&sp);
	printf("cost price:");
	scanf("%d",&bp);
	pr=sp-bp;
	printf("profit is: %d",pr);
	return 0;
}
