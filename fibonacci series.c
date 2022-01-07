// a c program to print fibonacci series upto n terms
#include<stdio.h>
void main()
{
	int a=0,b=1,i=1,c,n;
	printf("enter no of terms :");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	printf(". . .");
}
