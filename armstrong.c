#include<stdio.h>
#include<math.h>
int power(int b,int e)
{
	int ret=1;
	for(int i=1;i<=e;i++)
	{
		 ret=ret*b;
	}
	return ret;
	
}
int main()
{
	int num,sum=0,count=0;
	scanf("%d",&num);
	int temp1=num;
	int temp2=num;
	while(temp2>0)
	{
		temp2=temp2/10;
		count++;
		
	}
	
	while(temp1>0)
	{
		int rev=temp1%10;
//		sum+=pow(rev,count);
		sum+=power(rev,count);
		temp1/=10;
	}
	if(sum==num)
		printf("Armstrong Number");
	else
		printf("Not an Armstrong Number");
}
