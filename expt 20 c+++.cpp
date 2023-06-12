#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\nenter n:");
	scanf("%d",&n);
	for(i=0; i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum=sum +i;
		}
	}
	printf("\nthe sum of the even number is %d", sum);
	return 0;
}
