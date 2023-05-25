#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int *taosoNH(void)
{
 	static int r;// khi khai bao bien static thi khi ra khoi ham vung nho cua no se k bi mat di 
	srand((unsigned)time NULL);
	r = rand();
	return &r;
}
int main()
{
	int *p;
	p = taosoNH();
	*p = *p%50;
	printf("%d",*p);
	return 0;
}
