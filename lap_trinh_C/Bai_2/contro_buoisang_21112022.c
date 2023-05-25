#include<stdio.h>
#include<string.h>
void nhapmang(int n , int a[])
{
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuatmang(int n , int *pt)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d cua mang la %d\n",i,pt[i]);
	}
}
int main()
{   
    int a[4];
    nhapmang(4,a);
    xuatmang(4, a);
    printf("dia chi phan tu dau la %x\n",&a[0]);
	return 0;
}
