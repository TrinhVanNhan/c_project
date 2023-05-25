#include<stdio.h>
#include<string.h>
#include<math.h>
//tim so lon nhat trong mang ; tim so duong dau tien cua mang;tim so chan cuoi cung trong mang ; kiem tra so co dang 2^k hay khong 
void nhapmang(int a[], int n)
{
	int i = 0;
	for(;i<n;i++)
	{
		printf("nhap phan tu thu %d la \n",i);
        scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i = 0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d la %d \n",i,a[i]);
	}
}
void timsolonnhatrongmang(int a[],int n)
{
	int turn=0;
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]>turn)
		{
			turn = a[i];
		}
	}
	printf("phan tu lon nhat la %d \n",turn);
}
void hamtimsoduongdautiencuamang(int a[],int n)
{
	int dem=0;
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("phan tu thu %d co gia tri duong dau la %d \n",i,a[i]);
			dem=dem+1;
			break;
		}
		if(dem==1)
		{
			printf("%d",-1);
		}
	}
}
void timsochancuoicungtrongmang(int a[],int n)
{
	int turn ;
	int dem=0;
	int i=0;
	for(;i<n;i++)
	{
		if((a[i]%2)==0)
		{
			turn = a[i];
			dem=dem+1;
		}
	}
	if(dem==0)
	{
		printf("%d",-1);
	}
	else
	{
		printf("so chan cuoi la %d ",turn);
	}
}
void kiemtrasocodang2khaykhong(int a)
{
	int th ;
	if(a<1)
	{
		printf("so dua vao khong co dang 2^k\n");
	}
	if(a>=2)
	{
	  int i = 0;
	  while(a>0)
	  {
	  	th = a%2;
	  	a=a/2;
	  	if(th != 0)
	  	{
	  		printf("so dua vao khong co dang 2^k\n");
	  		break;
		  }
	 }	
	 if(a==0)
	 {
	 	printf("so dua vao co dang 2^k\n");
	 }
	}
}
int main()
{
	int a = 32;
	kiemtrasocodang2khaykhong(a);
	return 0;
}
