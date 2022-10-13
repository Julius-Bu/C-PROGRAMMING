#include<stdio.h>
int main() 
{
int i,k,j;
for(i=1;i<=4;i++) 
{
for(j=4;j>=i;j--) 
{     
 /* loop for making a space from left corner */
printf("  ");
}
for(k=1;k<=i;k++)
 {
/* incrementing external number for printing */
printf("  * ");
}
printf("\n");
}
return 0;
}
