#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=4;i++)
		{
			for(j=4;j>=i;j--) 
			{
				printf("  ");
			}
			for(k=i;k<=i;k++)
 			{
				printf("  * ");
				for(l=2;l<=i;l++)
				{
					printf(" ");
				}
				printf("  * ");
			}
			printf("\n");
		}
	/*	for(i=i;i>=1;i--)
		{
			for(j=4;j>=i;j--) 
			{
				printf("  ");
			}
			for(k=1;k<=i;k++)
 			{
				printf("  * ");
			}
			printf("\n");
		}*/
}
