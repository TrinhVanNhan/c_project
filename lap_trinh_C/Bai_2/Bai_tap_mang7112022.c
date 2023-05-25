#include<stdio.h>
#include<stdbool.h>
#include<math.h>
// nhap mang mot chieu cac so nguyen va in ra mot phan tu co dang 2^k
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
void chuong_trinh(int n ,int a[])
{   
    int x=0;
    int *dem = &x;
    int i=0;
    int b;
    bool kiemtra = false ;  
   for(;i<n;i++)
   {   
   if(a[i]>1)
   {  
   	while(a[i]%2==0)
   	   {   *dem=*dem +1;
   	   	   b=a[i]/2;
   	   	   a[i]=b;
   	   	   if((b>1)&((b%2)!=0))
   	   	   {
   	   	   	*dem=0;
   	   	     break;
				 }
	   }
	   if(a[i]==1)
	   {
	    kiemtra = true; 
	   	printf("so  viet duoi dang can tim\n");
	    b=pow(2,*dem);
		printf("%d",b);	
	    break;
	   }
	  
   }
   	   
   }
   if(kiemtra==false)
   {
   	printf("%d",-1);
   }
  
}
int main()
{   
    int a[5];
	nhap_mang(5,a);
	chuong_trinh(5,a);
	return 0;
}

