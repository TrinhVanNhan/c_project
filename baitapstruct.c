#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define len 100 
typedef struct {
	char ten[20];
	char gt[4];
	char tuoi;
	float toan;
	float ly ;
	float hoa;
	}infor_t;
void nhap(infor_t a[],int *n)
{
	printf("nhap so luong sinh vien trong danh sach : \n");
	scanf("%d",n);
	fflush(stdin);
	int i=0;
	for(;i<*n;i++)
	{
		printf("nhap ten :\n");
		gets(a[i].ten);
		printf("nhap gioi tinh :\n");
		scanf("%s",a[i].gt);
		fflush(stdin);
		printf("nhap tuoi:\n");
		scanf("%d",&a[i].tuoi);
		fflush(stdin);
		printf("nhap diem toan :\n");
	    scanf("%f",&a[i].toan);
	    fflush(stdin);
		printf("nhap diem ly :\n");
	    scanf("%f",&a[i].ly);
	    fflush(stdin);
	    printf("nhap diem hoa :\n");
	    scanf("%f",&a[i].hoa);
	    fflush(stdin);
	}
}
void in(infor_t a[],int n)
{
	printf("thong tin sinh vien la:\n");
	int i =0;
	for(;i<n;i++)
	{
		printf("%s : %s  %d   %f   %f    %f \n",a[i].ten,a[i].gt,a[i].tuoi,a[i].toan,a[i].ly,a[i].hoa);
	}
}
void sapxep(infor_t a[],int n)
{
	int i = 0;
	for(;i<n;i++)
	{
		if(i<n-1)
		{
		int j = i+1;
		for(;j<n;j++)
		{
			float x = a[i].toan + a[i].ly + a[i].hoa;
			float y = a[j].toan + a[j].ly + a[j].hoa;
			if(x<y)
			{
				infor_t c;
				c = a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		}
	}
}
int tim_ten(infor_t a[], int n )
{
	int b;
	char ten[6];
	printf("nhap ten can tim vao\n");
	gets(ten);
	int i=0;
	for(;i<n;i++)
	{
		if(strstr(a[i].ten,ten)!= NULL)
		{
			b = i;
		}
	}
	return b;
}
void xoa_ten(infor_t a[],int *n, int b)
{
	b = tim_ten(a,*n);
	int i=b;
	int j= b+1;
	for(;i<*n-1;i++)
	{
	  for(;j<*n;j++)
	  {
	   a[i]=a[j];
	  }
	}
	*n = *n-1;
}
void lay_tensv((infor_t a[],int *n)
{
	
}
int main()
{
	infor_t a[len];
	int b;
	nhap(a,&b);
	sapxep(a,b);
	xoa_ten(a,&b,2);
	in(a,b);
	return 0;
}
