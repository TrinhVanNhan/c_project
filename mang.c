#include<stdio.h>
#include<stdlib.h>
void nhapmang(int a[],int b)
{
	int i=0;
	for(;i<b;i++)
	{
		a[i]=i;
	}
}
void sapxep(int a[],int b)
{
	int i =0;
	for(;i<b;i++)
	{
		int j = i+1;
		for(;j<b;j++)
		{
			if(a[i]<a[j])
			{
			 int b;
			 b = a[i];
			 a[i]=a[j];
			 a[j]=b;
			}
		}
	}
}
void xuatmang(int a[],int b)
{
	int i =0;
	for(;i<b;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
    int mang[10];
	nhapmang(mang,10);
	sapxep(mang,10);
	xuatmang(mang,10);
	//int *pt;
//	printf("%d",sizeof(pt)); // cap phat cho con tro luon là 8byte tuc mot o nho ung voi cac loai con tro
	return 0;
}
