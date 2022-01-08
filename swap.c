#include<stdio.h>
void main()
{
	int a, b, temp;
	printf("Enter a, b values : ");
	scanf("%d %d", &a, &b);
	temp=a;
	a=b;
	b=temp;
	printf("Swap of a and b are :  %d  %d", a, b); 
}
