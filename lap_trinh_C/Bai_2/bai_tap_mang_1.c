#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
// tinh trung binh cac phan tu cua mang
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
void trungbinhmang(int n ,int a[])
{    float tong =0;
     float tb;
	int i=0;
	for(;i<n;i++)
	{   tong=tong+a[i];
		tb=(tong)/(i+1);
	}
	printf("gia tri tb la %f\n",tb);
}
void tim_so_duong(int n, int a[])
{
	 bool so_duong = false ;
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]>0)
		{
			so_duong=true;
				printf("mang co phan tu duong\n");
			break;
		}
	}
	if(so_duong==false)
	{
			printf("%d\n",-1);
	}
}
void tim_khoang_cach_xa_nhat_cua_mot_so_nhap_vao_den_phan_tu_mang(int n,int a[],int b[])
{  
   int x ;
   printf("nhap x vao\n");
    scanf("%d",&x);
	int i=0;
	for(;i<n;i++)
	{
	   b[i]=abs(x-a[i]);	
}
}

  
int main()
{   int a[3];
    int b[3];
    int max;
	nhap_mang(3,a);
//	 tim_so_duong(3, a);
//	trungbinhmang(3,a);
    tim_khoang_cach_xa_nhat_cua_mot_so_nhap_vao_den_phan_tu_mang(3,a,b);
     max =b[0];
     int i=0;
	for(;i<3;i++)
	{      
		if(b[i]>max)
		{
			max = b[i];
		}
	}
    
	printf("gia tri lon nhat la %d \n",max);
	return 0;
}
