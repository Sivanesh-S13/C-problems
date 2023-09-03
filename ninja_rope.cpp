#include<stdio.h>
int main()
{
	int size,i,h,s,sum=0;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;scanf("%d",&arr[i++]));
	scanf("%d",&h);
	scanf("%d",&s);
	for(i=0;i<size;i++)
	{
		if(arr[i]<=h)
		{
			sum++;
		}
		
	else if(arr[i]>h)
	{
		do
		{
			arr[i]=(h-s);
			
		}
		while(!(arr[i]<=h));
		sum++;
		}	
	}
	printf("%d",sum);
}
