#include<stdio.h>
int fact(int);
void main()
{
    int n, res;
    clrscr();
    printf("Enter a positive number to find Factorial\n");
    scanf("%d", &n);
    res = fact(n);
    printf("\nFactorial %d is %d (!%d = %d)",n,res,n,res);
    getch();
}
int fact(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
	fact = fact * i;
    }
    return fact;
}  	
