#include <stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("me.doc","r");
	c=getc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=getc(fp);
	}
	printf("\nThis is the end!");
	fclose(fp);
	return 0;
}
