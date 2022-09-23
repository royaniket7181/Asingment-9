#include<stdio.h>
int main()
{
	int x,num;
	printf("Enter the number:");
	scanf("%d",&num);
	x=(num>=0?1:2);
	switch(x)
	{
		case 1:
			printf("%d is the negative of num",-num);
			break;
		case 2:
			printf("%d is the positive of num",-num);	
			break;
	}
}