#include <stdio.h>
int main(){
	float u,a;
	printf("enter the number of units used:");
	scanf("%f",&u);
	if(u<=1000)
	{
		a=300;
	}
	else if(u<=2000)
	{
		a=300+(u-1000)*0.0275;
	}
	else if(u<=3000)
	{
		a=300+(u-1000)*0.0275+(u-2000)*0.03;
	}
	else
	{
		a=300+(u-1000)*0.0275+(u-2000)*0.03+(u-3000)*2;
	}
	printf("the electricity bill is:%f",a);
	return 0;
}

