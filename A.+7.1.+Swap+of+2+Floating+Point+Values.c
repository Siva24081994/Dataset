//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include<stdio.h>
 
int main()
{
	float a = 97.5;
	float b = 23.15;
	float temp;
	printf("a = %f\n", a);
	printf("b = %f\n", b); 
	temp = a;
	a = b;
	b = temp;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
}
