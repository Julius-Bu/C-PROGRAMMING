//A PROGRAM TO PRINT THE DATE OF BIRTH
#include <stdio.h>
int main()
{
	int cy,ag,dob;
	cy=2018;
	printf("Enter your age here: ");
	scanf("%d",&ag);
	dob=cy-ag;
	printf("Your date of birth is %d",dob);
	return 0;
}
