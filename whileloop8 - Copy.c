#include<stdio.h>

main()
{
	int a=1,n,sum=0;
	printf("enter your value =");
	scanf("%d",&n);
	
	while (a<=n)
	{
		sum=sum+a;
		a++;
	
	}
	printf("%d\n",sum);
}
