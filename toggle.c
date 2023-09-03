#include<stdio.h>
int main()
{
    int num,bit,new_num;
    scanf("Enter the number %d",&num);
    scanf("Enter the bit number %d",&bit);
    new_num=num & (1<<bit);
    printf("%d",new_num);
    return 0;
}
