/* Find simple interest - simple prac by Julius - sat/25th/08/2018 @ 12:14 */
#include<stdio.h>
main ()
{
	int p,t;
	float r,si;
	p=20000;
	t=2;
	r=0.5;
	// p=principle, r=rate, t=time, si=simple interest
	//formular for si
	si=p*t*r/100;
	printf(" \nGive that principle(p)\n = shs %d \n\n Time(t)\n = %d yr(s) \n\n And rate(r)\n =%f \n\n Simple interest(si)\n = p*r*t/100\n = shs %f", p,t,r,si);
	return 0;
}
