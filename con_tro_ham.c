#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef void(*func_t)(int,int); // khai b�o theo ki�u kh�ng tuong minh 
void cong(int x,int y)
{
	printf("tong la %d+%d = %d\n",x,y,x+y);
}
void tru(int x,int y)
{
	printf("hieu la %d-%d = %d\n",x,y,x-y);
}
void nhan(int x,int y)
{
	printf("tich la %d*%d = %d\n",x,y,x*y);
}
void chia(int x,int y)
{
	printf("thuong la %d/%d = %d\n",x,y,x/y);
}
void pheptoan(func_t func,int x, int y)
{
	func(x,y);
}
void lucchonpheptinh(func_t func, int x,int y)
{
    char pheptoan;
    while(1)
    {
    	printf("nhap vao phep toan\n");
    	char c;
    	scanf("%c",&c);
    	fflush(stdin);
    	if(c=='+')
    	{
    		func = cong;
    		func(x,y);
    	}
    	if(c=='-')
    	{
    		func = tru;
    		func(x,y);
    	}
    	if(c=='*')
    	{
    		func = nhan;
    		func(x,y);
    	}
    	if(c=='/')
    	{
    		func = chia;
    		func(x,y);
    	}
    }
}
int main()
{
	/* v� du khai bao tuong minh
	void (*func)(int,int); // khai b�o con tro h�m, d�y l� khai b�o tuong minh
	func = cong;
	func(1,2);// thuc thi con tro h�m m� kh�ng qua h�m
	func = tru;
	func(5,78);
	*/
	/*
	// vi du khai bao kh�ng tuong minh
	func_t func1 , func2;
	func1 = cong;
	func1(2,80);
	func1 = tru;
	func1(8,4);
	*/
	/*
	// v� du ve su tong quat cua ham con tro
	pheptoan(cong,5,6);
	pheptoan(tru,6,7);
	*/
	func_t func;
	lucchonpheptinh(func,8,2);
	return 0;
}
