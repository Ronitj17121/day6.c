#include<stdio.h>
#include<conio.h>

void main()
{

int x,y,z;

		printf("Enter first number :");
		scanf("%d",&x);
		printf("Enter secound number :");
		scanf("%d",&y);
		printf("Enter thred number :");
		scanf("%d",&z);
		
		(x<y)?("x<z")?printf("x is minimum"):printf("z is minimum"):printf("y<z")?printf("y is minimum"):printf("z is minimum");
}
