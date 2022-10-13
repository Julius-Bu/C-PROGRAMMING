//A C program to modify program 9.3
#include <stdio.h>
int main()
{
	FILE *fp;
	char *message;
	message="Introduction C Programming";
	fp=fopen("message.txt","w");
	if(fp!=NULL)
	{
			fputs(message,fp);
			fclose(fp);
		
	}
	else
	printf("\nError while opening file");
	return 0;
}
