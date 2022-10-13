// A program to calculate simple interest
#include <stdio.h>
int main()
{
	int p, t ;
	float si, r ;
	//where p = principle, t = time, si = simple interest, r = rate
	printf("||||||||||||||||||||||||||||||||||||||||||\n");
	printf("\tSIMPLE INTEREST CALCULATOR\n");
	printf("||||||||||||||||||||||||||||||||||||||||||\n\n");
	printf("Please enter;\nprinciple:");
	scanf("%d",&p);
	printf("\n\nEnter time(in years):");
	scanf("%d",&t);
	printf("\n\nEnter rate:");
	scanf("%f",&r);
	si = (p*r*t)/100;
	printf("\n\n\t\tOk!\n\t\tNow\n\n");
	printf("\t\tsimple interest = shs%.3f/=\n\n",si);
	system("pause");
	return 0;
}
