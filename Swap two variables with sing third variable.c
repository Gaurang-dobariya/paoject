#include<stdio.h>

main()
{
	
	int a,b,c;
	printf("Enter he value of A =");
	scanf("%d",&a);
	
	printf("Enter he value of B =");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A: %d\n",a);
	printf("B: %d",b);
	
	
}