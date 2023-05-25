#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// bai 162 , bai 172 trong 1000 cau C
void nhap_mang();
void xuat_mang();
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
void bai_tap( int n,int a[])
{
	bool kiemtra = false;
	int i=1;
	for(;i<n-1;i++)
	{
		if(a[i]==a[i+1]*a[i-1])
		{
			kiemtra= true;
			printf("mang thoa man dk ");
			break;
		}
	}
	if(kiemtra==false)
	{
		printf("%d",-1);
	}
}
void sap_xep_mang(int n, int a[])
{
	int i=0;
	int turn;
	for(;i<n;i++)
	{   int j=i;
		for(;j<n;j++)
		{
			if(a[i]>a[j])
			{
				turn=a[i];
				a[i]=a[j];
				a[j]=turn;
			}
		}
	}
}

int bai_tap_173(int n , int a[])
{   
    int c[n];
	int i=0; 
	int max =0; 
	int pt ;  
	for(;i<n;i++)
	{   int dem=1;
		int j=0;
		for(;j<n;j++)
		{  
		    if((a[i]==a[j])&(i!=j))	
		    {   dem=dem+1;
		    	c[i]=dem;
			}
			c[i]=dem;
		}
	}
	int j=0;
    for(;j<5;j++)
	{
		if(c[j]>max)
		{
			max=c[j];
			pt=a[j];
			
		}
	}
	printf("so xuat hien nhieu nhat la %d voi %d lan",pt,max);
//	sap_xep_mang(n,c);
//	xuat_mang(n,c);


}

int main()
{   
    int a[5];
	nhap_mang(5,a);
	xuat_mang(5,a);
//	bai_tap(5,a);
  //  printf("in ra tan suat cua cac so \n");
    bai_tap_173(5,a);
	return 0;
}
