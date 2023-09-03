#include<stdio.h>
#include<math.h>
int rev(int num)
{
	int temp,rev,sum=0;
	temp=num;
	while(temp>0)
	{
		rev=temp%10;
		sum=sum*10+rev;
		temp/=10;
	}
	return sum;
}
int main()
{
	int num;
	scanf("%d",&num);
	int p=pow(num,2);
	int r=rev(p);
	int sq=sqrt(r);
	int sol=rev(sq);
	if(sol==num)
		printf("%d is an Adam Number",num);
	else
		printf("%d Not an Adam Number",num);
}
	

