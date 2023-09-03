#include<stdio.h>
#include<string.h>
int main()
{
	int size,i;
	scanf("%d",&size);
	char str[size];
	scanf("%[^\n]s",str);
	printf("%s",str);
	printf("\n %s",strrev(str));
}

