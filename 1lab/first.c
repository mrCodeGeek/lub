#include <stdio.h>
#include <string.h>

int roman (int i,int j,char c)
{
	while (i>=j) 
	{
		putchar(c);
		i=i-j;
	}
	return(i);
}


int main(int argc, char const *argv[])
{
    int num;
	
	printf("Enter Number, more that 0, but less 100000\n");
	scanf("%d", &num);

	num=roman(num,1000,'M');
	num=roman(num,500,'D');
	num=roman(num,100,'C');
	num=roman(num,50,'L');
	num=roman(num,10,'X');
	num=roman(num,5,'V');
	num=roman(num,1,'I');

	getchar();
	printf("\n\n");
	
	return 0;
}