// A simple calculator to accept two floating point numbers from the keyboard
#include <stdio.h>
int main()
{
	float p,x,y,ad,sb,mt,dv;
	printf("Enter number 1:");
	scanf("%f",&x);
	printf("Enter number 2:");
	scanf("%f",&y);
	printf("\tMathematical Operation\n");
	printf("-----------------------------------\n");
	printf("1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n");
	printf("-----------------------------------\n");
	printf("Enter your preference: ");
	scanf("%f",&p);
	if (p==1)
	{
		ad=x+y;
		printf("Answer : %.2f\n\n",ad);
	}
	else if (p==2)
	{
		sb=x-y;
		printf("Answer : %.2f\n\n",sb);
	}
	else if (p==3)
	{
		mt=x*y;
		printf("Answer : %.2f\n\n",mt);
	}
	else if (p==4)
	{
		dv=x/y;
		printf("Answer : %.2f\n\n",dv);
	}
	else
	printf("Ooops!...\nUnknown application!\n\n");
	return 0;
}
