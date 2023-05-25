#include<stdio.h>
#include<string.h>
// them vao mot phan tu o vi tri K
// nhap x vao mot mang tang nhung van giu nguyen tinh tang cua mang
// xoa phan tu mang
// xoa cac so lon nhat trong mang
//xoa cac phan tu trung nhau va giu lai duy nhat mot phan tu 
//xoa cac phan tu xuat hien nhieu hon mot lan trong mang
// dao nguoc mang ban dau 
void traodoi(int *a, int *b)
{
	int j;
	j=*a;
	*a=*b;
	*b=j;

}
void nhapmang(int a[],int *n)
{
	printf("nhap vao so phan tu cua mang\n");
	scanf("%d",n);
	printf("nhap vao cac phan tu cua mang\n");
	int i=0;
	for(;i<*n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void them(int a[],int n,int vt ,int gt)
{
	printf("nhap gia tri phan tu ban muon them \n");
	scanf("%d",&gt);
	printf("nhap vi tri ban muon them vao \n");
	scanf("%d",&vt);
	int i=n;
	for(;i>vt;i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=gt;
	n++;
	xuatmang(a,n);
}
void nhapx(int a[],int n,int x)
{
	int vt;
	printf("nhap gia tri x mong muon\n");
	scanf("%d",&x);
	int i=0;
	for(;i<n;i++)
	{
		if(x<a[i])
		{
			vt=i;
			break;
		}
	}
	int j=n;
	for(;j>vt;j--)
	{
		a[j]=a[j-1];
	}
	a[vt]=x;
	n++;
	xuatmang(a,n);
	
}
void xoaphan(int a[],int *n,int vt)
{
       
	    int i= vt;
	    for(;i<*n-1;i++)
	    {
	    	a[i]=a[i+1];
		}
		*n=*n-1;
}
void xoasln(int a[],int n)
{
	while(n>1)
	{
		int i=0;
		int max=0;
		int vt;
		for(;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		for(;i<n;i++)
		{
			if(a[i]=max)
			{
				vt=i;
			}
		}
		int j=vt;
		for(;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		n--;
		xuatmang(a,n);
		if(n>1)
		{
			printf("\n");
		}
	}
}
void xoapt(int a[],int *n)//  phai tac dong vao trong dia chi cua bien thi no moi khong mat di 
{
	int i=0;
	for(;i<*n;i++)
	{
		int j=i+1;
		for(;j<*n;j++)
		{
			if(a[i]==a[j])
		{
			xoaphan( a,n,j);
			j=j-1;
		}
		}
	}
	xuatmang(a,*n);
}
void xoascpt(int a[],int *n)
{
	int i=0;
	for(;i<*n;i++)
	{
		int j=i+1;
		int dem=0;
		for(;j<*n;j++)
		{
			if(a[i]==a[j])
			{
				xoaphan(a,n,j);
				j--;
				dem=dem+1;
			}
		}
		if(dem>0)
		{
			xoaphan(a,n,i);
			i--;
		}
	}
	xuatmang(a,*n);
}
void daonguocgiatri(int a[],int n)
{
	int i=0;
	for(;(n-i-1)>=i;i++)
    {
    	traodoi(&a[i],&a[n-1-i]);
	}
	xuatmang(a,n);
}
void daonguocsochan(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]%2==0)
		{
			int j=i+1;
			for(;j<n;j++)
			{
				if(a[j]%2==0)
				{
				  traodoi(&a[i],&a[j]);	
				}
			}
			
		}
	}
	xuatmang(a,n);
}
int main()
{
	int a[100];
	int n;
	int vt ;
	nhapmang(a,&n);
    daonguocsochan(a, n);
	return 0;
}
