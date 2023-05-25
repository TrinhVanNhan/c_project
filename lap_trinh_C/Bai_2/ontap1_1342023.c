#include<stdio.h>
#include<string.h>
#include<conio.h>
void nhap_mang(int n, int a[])
{
	int i=0;
	printf("nhap cac phan tu cau mang\n ");
	for(;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuat_mang(int n,int a[])
{
	int i=0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d la %d\n",i,a[i]);
	}
}
int kiemtrabitrung(int a[],int n,int vitri)
{
	int i= vitri-1;
	for(;i>=0;i--)
	{
		if(a[i]=a[vitri])
		{
			return 0;
		}
	}
	return 1;
}
int demtanxuat(int a[],int n)
{
	int i = 0 ; 
	for(;i<n;i++)
	{ 
	    int b = kiemtrabitrung(a,n,i);
		if(b==1)
		{
			int dem=1;
			int j = i+1;
			for(;j<n;j++)
			{
				if(a[i]=a[j])
				{
					dem++;
				}
			
			}
			printf("so lan xuat hien cua so %d la %d\n",a[i],dem);
		}
	}
}
int  kiemtramangtangdan(int a[], int n)
{
	int i=0;

	for(;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int a[4];
	nhap_mang(4,a);
	int b;
	b=kiemtramangtangdan(a,4);
	if(b==1)
	{
		printf("mang tang\n");
	}
    else
    {
    	printf("mang k tang\n");
	}
	return 0;
}
