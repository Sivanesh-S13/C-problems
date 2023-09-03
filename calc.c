#include<stdio.h>
int add(int num1,int num2)
{
	return num1+num2;
}
int sub(int num1,int num2)
{
	return num1-num2;
}
int mul(int num1,int num2)
{
	return num1*num2;
}
int div(int num1,int num2)
{
	return num1/num2;
}

int main()
{
	int select,num1,num2;
	printf("\n 1.Add 2.Sub 3.Mul 4.Div \n");
	scanf("%d",&select);
	printf("Enter the numbers to perform Operation ");
	scanf("%d %d",&num1,&num2);
	switch(select)
	{
		case 1:printf("Addition of %d and %d is %d",num1,num2,add(num1,num2));break; 
		case 2:printf("Subtraction of %d and %d is %d",num1,num2,sub(num1,num2));break;
		case 3:printf("Multiplication of %d and %d is %d",num1,num2,mul(num1,num2));break;
		case 4:printf("Division of %d and %d is %d",num1,num2,div(num1,num2));break;
	}
}
