#include<stdio.h>
int main()
{
	int  year,y;
	printf("Enter a year in YYYY forma:");
	scanf("%d",&year);
	
	y=year%400 == 0 || year%100 == 0 || year%4 == 0;
	
	switch(y)
	{
		case 1 :
			printf("\n%d is the leap year.\n ",year);
		break;
		case 0 :
			printf("\n%d is not a leap year.\n",year);
			break;
		default :
		    printf("\n%d is not a leap year.\n",year);
			break;	
	}
}