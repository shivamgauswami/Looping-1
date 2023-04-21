#include<stdio.h>

main()
{
	int a=1,n,fac=1;
	printf("enter your value =");
	scanf("%d",&n);
	
	while (a<=n)
	{
		fac=fac*a;
		a++;
	
	}
	printf("%d ",fac);
}
