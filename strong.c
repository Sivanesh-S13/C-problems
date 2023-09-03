#include<stdio.h>
int fact(int num)
{
	int f=1,i;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int num,temp,rev,sum=0;
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rev=temp%10;
		int f=fact(rev);
		sum+=f;
		temp/=10;
	}
	if(sum==num)
		printf("Strong Number");
	else
		printf("Not an Strong Number");
	
}
