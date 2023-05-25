#include<stdio.h>
int *timsolonnhat(int *x ,int *y)//ham tra ve dia chi 
// phai truyen ve dia chi vi khi khai bao la bien cuc bo thi khi ra khoi ham no se mat nen dia chi tra ve k cos gia tri nao ca vi vay phai truyen vao dia chi cua so can tra ve 
{
	if(*x>*y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{   int x=15;
    int y=20;
	int *res;
	res = timsolonnhat(&x,&y);
	printf("so lon nhat la %d",*res);
	return 0;
}
