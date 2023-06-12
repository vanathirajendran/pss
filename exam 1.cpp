#include <stdio.h>
int factorial ();
int main()
{
	int n=8;
	printf("factorial of %d=%d", "n factorial");
	return 0;
}
int factorial(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n * factorial (n-1);
	}
}
