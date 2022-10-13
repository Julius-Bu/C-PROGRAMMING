//A program to store marks of 5 students for 5 subjects.
#include<stdio.h>
int main()
{
	int students[5][5],i,j,sum,d,s,gsum=0;
	float avg,gavg;
	for(i=0;i<5;i++)
	{
		sum=0;
		s=i+1;
		printf("Please now enter marks for student %d\n",s);
		for(j=0;j<5;j++)
		{
			d=0;
			d=j+1;
			printf("Subject %d\n",d);
			scanf("%d",&students[i][j]);
			sum=sum+students[i][j];
		}
		printf("Sum of student %d is %d\n",s,sum);
		avg=sum/j;
		printf("Average of student %d is %.2f\n",s,avg);
		gsum=gsum+sum;
	}
	printf("------------------------------------------------\n");
	printf("Actually,\n");
	printf("Sum of the %d students is %d\n",i,gsum);
	gavg=gsum/i;
	printf("Average of %d students is %.2f\n",i,gavg);
	system("pause");
	return 0;
}
