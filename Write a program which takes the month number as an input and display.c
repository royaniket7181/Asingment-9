#include<stdio.h>
int main()
{
	int x;
	printf("Enter the month number:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1 :
			printf(" jan have 31 days");
		break;
		case 2 :
			printf("feb have 28/29 days");
		break;	
		case 3 :
			printf(" mar have 31 days");
		break;	
		case 4 :
			printf("apr have 30 days");
		break;	
		case 5 :
			printf(" may have 31 days");
		break;	
		case 6 :
			printf("june have 30 days");
		break;	
		case 7 :
			printf(" july have 31 days");
		break;	
		case 8 :
			printf(" aug have 31 days");
		break;	
		case 9 :
			printf("sep have 30 days");
		break;
		case 10 :
			printf("oct have 31 days");
		break;	
		case 11 :
			printf("nov have30 days");
		break;	
		case 12 :
			printf("dec have 31 days");
		break;	
		default :
			printf("wrong month");
		break;			
	}
	
}