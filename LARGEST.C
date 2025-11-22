#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,b=25,c=15;
	clrscr();
	if(a>b && a>c)
		printf("largest is %d\n",a);
	else    if(b>c)
		printf("largest is %d\n",b);
	else
		printf("largest is %d\n",c);
	getch();
	return 0;
}