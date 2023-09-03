#include <stdio.h>

int main()
{
    //printf("Hello World");
    int num;
    printf("Enter the no. of inputs \n");
    scanf("%d",&num);
    printf("Enter the numbers");
    int a[num];
    for(int i=0;i<num;scanf("%d",&a[i++]));
    //for(int i=0;i<num;printf("%d",a[i++]));
    
    for(int i=0;i<num-1;i++)
    {
        if((a[i+1])!=(a[i]+1))
        {
        	printf("the missing number is %d\n",a[i]+1);
		}
		else
		{
			continue;
		}
    }
    
    

    return 0;
