#include<stdio.h>
int main()
{
	int a,b=1;
	while(b!=0)
	{
	printf("\t\tMenu");
	printf("\n...........................................");
	printf("\n1 - Microsoft Word");
	printf("\n2 - Yahoo messenger");
	printf("\n3 - AutoCAD");
	printf("\n4 - Java Games");
	printf("\n0 - Exit");
	printf("\n...........................................");
	printf("\nEnter number of your preference: ");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("\nPersonal Computer Software\n\n\n\n\n\n");
			break;
		case 2:
			printf("\nWeb based Software\n\n\n\n\n\n");
			break;
		case 3:
			printf("\nScientific Software\n\n\n\n\n\n");
			break;
		case 4:
			printf("\nEmbedded Software\n\n\n\n\n\n");
			break;
		case 0:
			break;
		default:
			{
			printf("\nIncorrect input\n\n\n\n\n\n");
		}
	}
	b=a;
}
	return 0;
}
