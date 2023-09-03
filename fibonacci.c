#include<stdio.h>
int main()
{
	int num1=0,num2=1,num,i,num3;
	scanf("%d",&num);
	num3=num1+num2;
	printf("%d %d",num1,num2);
	for(i=3;i<=num;i++)
	{
		printf(" %d",num3);
		num1=num2;
		num2=num3;
		num3=num1+num2;
	}
	
}
