#include<stdio.h>
#include<string.h>
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
int songuyento(int a)
{
	int i=2;
	printf("nhap vao so ban muon va lon hon 2\n");
	scanf("%d",&a);
	for(;i<a;i++)
	{
		if((a%i)==0)
		{
			return 1;
			break;
		}
	}
}
void vitrinhonhattrongmang( int a[] , int n)
{
	int min = a[0];
	int i=1;
	for(;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	int j=0;
	for(;j<n;j++)
	{
		if(a[j]==min)
		{
			printf("vi tri co gia tri thap nhat la %d\n",j);
			
			break;
		}
	}
}
void sapxepmangtangdan(int a[],int n)
{
	int i=0;
	int j;
	int turn;
	for(;i<n;i++)
	{
		for(j=i;j<n;j++)
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
void bai169(int a[],int n)
{
	int max=0;
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	if((max%2)==0)
	{
		max=max+2;
	}
	if((max%2)!=0)
	{
		max=max+1;
	}
	printf("so chan nho nhat la %d\n",max);
}
void bai233()
{
	
}
int main()
{
    int a[4];
    nhap_mang(4,a);
    bai169(a,4);
	return 0;
}

