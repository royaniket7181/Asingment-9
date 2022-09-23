#include<stdio.h>
int main()
{
	char choice;
	printf("This the menu option:\n");
	printf("a.Addition\nb.Subtraction\nc.Multiplication\nd.Division\ne.Exit\n");
   
    printf("Enter your choice:");
	scanf("%c",&choice);	
	
	float a,b;
	
	
	switch(choice)
	{
		case 97:
			printf("\nEnter two numbers:");
			scanf("%f%f",&a,&b);
			printf("%f is the sum of num.",a+b);
		break;
		case 98:
			printf("\nEnter two numbers:");
			scanf("%f%f",&a,&b);
			printf("%f is the difference of num.",a-b);
		break;
		case 99:
			printf("\nEnter two numbers:");
			scanf("%f%f",&a,&b);
			printf("%f is the product of num.",a*b);
		break;
		case 100:
			printf("\nEnter two numbers:");
			scanf("%f%f",&a,&b);
			printf("%f is the division of num.",a/b);
		break;
		case 101:
			break;
	}
}