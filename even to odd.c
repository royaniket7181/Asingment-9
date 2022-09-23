#include<stdio.h>
int main()
{
	int x,num;
	printf("Enter a even number:");
	scanf("%d",&num);
	x=num%2==0?1:2;
	switch(x)
	{
		case 1:
			printf("Next odd number of given is %d",num+1);
			break;
		case 2:
			printf("This is not an even number.");
			break;
	}
}