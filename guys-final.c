//A C program to modify program 9.3
#include <stdio.h>
int main()
{
	FILE *fp;
	int n=0;
	char tel_no[20],buffer[100],*info;
	char name[50],email[100];

	
		printf("\n---------------------Menu-----------------------------\n");
		printf("1. Add new friend.\n");
		printf("2. Display contact info\n");
		printf("3. Exit\n");
		printf("----------------------------------------------------------\n");
		printf("Enter menu number: ");
		scanf("%d",&n);
	
		switch (n)
		{
			case 1:
				{
					fp=fopen("directory.doc","a");
					if(fp!=NULL)
					{
					
					
						printf("---------New friend info---------\n");
						printf("Name : ");
						scanf("%s",name);
						fputs(name,fp);
						putc('\t',fp);
						putc('\t',fp);
						printf("Phone-No : ");
						scanf("%s",tel_no);
						fputs(tel_no,fp);
						putc('\t',fp);
						putc('\t',fp);
						printf("e-Mail : ");
						scanf("%s",email);
						fputs(email,fp);
						putc('\n',fp);
						fclose(fp);
					}
					else
					printf("\nError!");	
					return main();
					break;
				}
			case 2:
				{
					printf("-------------------Contact info-----------------------\n");
					printf("Name\t\tTel-No\t\t\te-Mail\n");
					fp=fopen("directory.doc","r");
					if(fp!=NULL)
					{
						info=fgets(buffer,100,fp);
						while(info!=NULL)
						{
							printf("%s",buffer);
							info=fgets(buffer,100,fp);
						}
						fclose(fp);
					}
					else
					printf("\nError!");
					printf("----------------------------------------------------------------------");
					return main();
					break;
				}
			case 3:
				return 0;
				break;
			default:
				printf("\nIncorrect input!");
		}
	
	
}
