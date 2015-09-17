#include <stdio.h>

int roman (int i,int j,char c)
{
	while (i>=j) 
	{
		putchar(c);
		i=i-j;
	}
	return(i);
}


int main()
{
    int num;
	
	printf("Enter number: ");
	scanf("%d", &num);

	num=roman(num,1000,'M');
	num=roman(num,500,'D');
	num=roman(num,100,'C');
	num=roman(num,50,'L');
	num=roman(num,10,'X');
	num=roman(num,5,'V');
	num=roman(num,1,'I');
	
	return 0;
}