#include<stdio.h>
int main()
{
	char choice;
	printf("This is menu option\n");
	printf("a.Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
	printf("b.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
	printf("c.Check whether a given set of three numbers are equilateral triangle or not\n");
	printf("d.Exit\n");
	
	printf("Enter your choice:");
	scanf("%c",&choice);
	
	int a,b,c;
	
	switch(choice)
	{
		case 97:
			printf("Enter side of triangle.");
			scanf("%d%d%d",&a,&b,&c);
			if(a==b!=c||b==c!=a||c==a!=b)
			printf("this is isosceles triangle");
			else
			printf("this is not a isosceles triangle.");
			break;
		
		case 98:
			printf("Enter side of triangle.");
			scanf("%d%d%d",&a,&b,&c);
			if(a^2==b^2+c^2||b^2==a^2+c^2||c^2==b^2+a^2)
			printf("this is right angled triangle");
			else
			printf("this is not a right angled triangle.");
			break;
			
		case 99:
		   	printf("Enter side of triangle.");
			scanf("%d%d%d",&a,&b,&c);
			if(a==b&&a==c)
			printf("this is equilateral triangle");
			else
			printf("this is not an equilateral triangle.");
			break;
			
		default :
			printf("Wrong choice.");
			break;
	}
}