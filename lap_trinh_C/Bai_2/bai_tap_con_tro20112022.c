#include<stdio.h>
#include<string.h>
int  tong(int *a, int *b)
{ 
	printf("nhap vao so a\n");
	scanf("%d",a);
	printf("nhap vao so b\n");
	scanf("%d",b);
	return (*a)+(*b);
}
int nhap_mang(int n)
{
	int *a ;
	int i=0;
	int j=0;
	int tong=0;
	for(;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(;j<n;j++)
	{   
	    tong= tong+*(a+j);
		printf("phan tu thu %d la %d\n",j,*(a+j));
	}
	return tong;
}
int main()
{   
    int x,y;
    int c;
    int d;
	c=tong(&x,&y);
	printf("tong la %d\n",c);
	int n=5;
	d=nhap_mang(5);
	printf("tong lan hai la %d",d);
	return 0;
}
