#include<stdio.h>
#include<stdbool.h>
void nhapmang(int n , int a[])
{
	int i=0;
	for(;i<n;i++)
	{   
	   printf("nhap phan tu thu %d ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int n , int a[])
{
	int i=0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d la %d\n",i,a[i]);
	}
}

int main()
{   
    int a[5];
	nhapmang(5,a);
    int b;

	int i=0;
	for(;i<5;i++)
	{  int j=2;
	   bool snt = true;
	   	for(;j<a[i];j++)
	   	{ 
	     
		if(a[i]%j==0) 
		{
		    snt= false;
	    }
		}
		if(snt==true)
		{
			a[i]=0;
		 } 
    }

	xuatmang(5,a);
	return 0;
}
