//TRIAL1
#include <stdio.h>
int gospel();
int main( ) 
{  
	int a=7,b;
	b=gospel(a); 
	printf("%d",b);
	printf("\n%d",gospel(5));
} 
 
int gospel(int x) 
{  
	int y;
	y=x*x;
	return (y);
} 
