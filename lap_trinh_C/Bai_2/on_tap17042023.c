#include<stdio.h>
#include<string.h>
// bai257
void nhap_mang(int n , int a[])
{   
	printf("nhap cac phan tu cua mang\n");
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuat_mang(int n, int a[])
{
	int i=0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d la %d\n",i,a[i]);
	}
}
int timsole(int a)
{
	if((a%2)!=0)
	{
		return 1;
	}
	return 0;
}
void sapxepcacsole( int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		if(timsole(a[i])==1)
		{
		  int turn;
		  int j = i+1;
		  for(;j<n;j++)
		  {
		  	if(timsole(a[j])==1)
		  	{
			  if(a[j]<a[i])
			  {
			  	turn=a[i];
			  	a[i]=a[j];
			  	a[j]=turn;
			  }
			}
		  }	
		}
	}
	xuat_mang(n,a);
}
// bai 266
void themmang(int *a , int n , int them,int vitri)
{
//	printf("nhap vao vi tri can them phan tu\n");
//	scanf("%d",&vitri);
//	printf("nhap vao gia tri them \n");
//	scanf("%d",&them);
	int i = n;
	for(;i>vitri;i--)
	{
		a[i]=a[i-1];
	}
	a[vitri]=them;
	xuat_mang(n+1,a);
}
void hoandoi(int *a,int *b)
{
	int turn;
	turn =*a;
	*a=*b;
	*b=turn;
}
// bai269
void sapxepmang(int a[],int n)
{
	int i=0;
	for(; i<n;i++)
	{
		int j=i;
		for(;j<n;j++)
		{
			if(a[j]<a[i])
			{
				hoandoi(&a[j],&a[i]);
			}
		}
	}
}
int timvitridethem(int a[],int n,int gt)
{
   
   int i=0;
   for(;i<n;i++)
   {
   	if(gt<a[i])
   	{
   	  return i;	
	}
   }	
 
}
// bai 271
void xoaphantumang(int a[],int n,int vt)
{
	int i=vt;
	for(;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}
// bai 273
void xoacacsoam(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]<0)
		{
			xoaphantumang(a,n,i);
			n--;
		}
	}
}
// bai 284 dao cac so chan trong mang 
void daocacsochan(int a[],int n)
{
	int i=0;
	for(;i<n-1;i++)
	{
		int j=i+1;
		for(;j<n;j++)
		{
			if((a[i]%2==0)&(a[j]%2==0))
			{
				hoandoi(&a[i],&a[j]);
				
			}
		}
	}
}
// bai 286 Dich trai xoay vong k phan tu cua mang 
void dichtraixoayvong(int a[],int n )
{
	int k;
	printf("nhap vao phan tu dich\n");
	scanf("%d",&k);
	while(k--)
	{
	int i = 0;
	int tam =a[0];
	for(;i<n-1;i++)
	{
	   a[i]=a[i+1];
	}
	a[n-1]=tam;
	}
}
int main()
{
	int a[100];
	int *n;
	nhap_mang(4,a);
    dichtraixoayvong(a,4);
    xuat_mang(4, a);
	return 0;
	
}
