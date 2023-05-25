#include<stdio.h>
#include<string.h>
void nhap_mang(int n,int a[])
{
	int i=0;
	for(;i<n;i++)
	{
	//	a[i]=i;
		scanf("%d",&a[i]);
	}

}
void xuat_mang(int n, int a[])
{
	int i=0;
	for(;i<n;i++)
	{   
	    printf("cac phan tu mang la\n");
		printf("%d\n",a[i]);
	}
}
void tim_min_max(int n , int a[])
{
	 int i=0;
    int min=a[0], max=a[0];
    for(;i<n;i++)
    {
       if(a[i]<min)
       {
       	  min=a[i];
	   }
	   if(a[i]>max)
	   {
	   	  max=a[i];
	   }
	}
	printf("min la %d\n",min);
	printf("max la %d\n",max);
}
int xep_tang_dan(int n, int a[])
{
	int i=0;
	int tern;
	for(;i<n;i++)
	{
		int j=i;
		for(;j<n;j++)
		{
			if(a[j]<a[i])
			{
				tern =a[i];
				a[i]=a[j];
				a[j]=tern;
			}
		}
	}
//	return a[i];
}
int main()
{
	
    int a[100];
    nhap_mang(5,a);
    //xuat_mang(5,a);
    tim_min_max(5,a);
    xep_tang_dan(5,a);
    xuat_mang(5,a);
	return 0;
}
