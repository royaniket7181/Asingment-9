#include<stdio.h>
int main()
{    int reading,x;
	float bill,diff;
	printf("Enter your reading:");
	scanf("%d",&reading);
	
	if(reading<=50)
	x=1;
	if(reading>50&&reading<=150)
	x=2;
	if(reading>150&&reading<=250)
	x=3;
	if(reading>250)
	x=4;
	
	switch(x)
	{
		case 1:
			bill=reading*0.50;
			printf("%f is the bill",bill+bill*0.2);
			break;
		case 2:
			diff=reading-50;
			bill=50*0.50+diff*0.75;
			printf("%f is the bill",bill+bill*0.2);
			break;
		case 3 :
			diff=reading-150;
			bill=50*0.50+100*0.75+diff*1.2;
			printf("%f is the bill",bill+bill*0.2);
			break;
		case 4 :
		     diff=reading-250;
		     bill=50*0.50+100*0.75+100*1.2+reading*1.5;
		     printf("%f is the bill",bill+bill*0.2);
		     break;
	}
	
}