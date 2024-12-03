#include <stdio.h>
void swapx(int*, int*);
void main()
{
    int a = 10, b = 20;
	swapx(&a,&b);
    printf("Inside the Caller:\na = %d b = %d\n", a, b); 
}
void swapx(int* x, int* y) 
{
    int t;
    t = *x;
    *x = *y;
    *y = t; 
    printf("Inside the Function:\n x=%d y=%d\n",*x,*y);
}




