#include<stdio.h>

main()
{
	int a=1,n;
	printf("enter your value =");
	scanf("%d",&n);
	
	while (a<=10)
	{
		printf("%d*%d=%d \n",n,a,n*a);
		a++;
	}

}
