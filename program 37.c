#include<stdio.h>
void main()
{
	float x,r1,r2,a,b,c;
	printf("enter the values a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	x=b*b-4*a*c;
	r1=(-b+x)/2*a;
	r2=(-b-x)/2*a;
	if(x>0)
	printf("root are real");
	else if (x<0)
	printf("root are imaginary");
	else
	printf("root are same");
	printf("r1=%f",r1);
	printf("r2=%f",r2);
}
