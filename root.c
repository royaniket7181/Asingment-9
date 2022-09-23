#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,real,img;
	int x;
	printf("Enter the value a,b,c of quadratic eq ax^2+bx+c:\n");
	printf("a=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	
	d=b*b-4*a*c;
	x=(d>0?1:2);
	if(d==0)
	x=3;
	switch(x)
	{
		case 1:
			root1=(-b+sqrt(d))/2*a;
			root2=(-b-sqrt(d))/2*a;
			printf("%f and %f are the root.",root1,root2);
            break;
		case 2:
		    real=-b/2*a;
		    img=sqrt(-d)/2*a;
		    printf("%f and %f are the root.",real,img);
		    break;
		case 3:
		    root2=root1=-b/2*a;
		    printf("%f and %f are the root.",root1,root2);
		    break;
	}
}