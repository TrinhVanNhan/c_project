#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len 100
// struct la mot kieu du lieu tu dinh nghia , khai báo struct o ben ngoai ham
/*
gia tri "."
con tro "->"
nhap mot gia tri dung scanf();
nhap mot chuoi dung gets();
*/
// cach khai bao 
/* 
 typedef struct {
 
    }; sruct name 
*/
typedef struct {
	char ten[20];
	char tuoi;
	char mssv;
	}sv_t;
typedef struct {
	char ten[20];
	char gt[4];
	char tuoi;
	float toan;
	float ly ;
	float hoa;
	}infor_t;
	// ly thuyet va vi du
void nhapthongtin(sv_t *a , int *b)
{
	printf("nhap vao so phan tu: \n");
	scanf("%d",b);
	fflush(stdin);
	int i=0;
	for(;i<*b;i++)
	{
		printf("nhap ten :\n");
		gets(a[i].ten);
		printf("nhap tuoi :\n");
		scanf("%d",&a[i].tuoi);
		fflush(stdin);
		printf("nhap msss:\n");
		scanf("%d",&a[i].mssv);
		fflush(stdin);
		/*
		cach 2 
		for(;i<*b;i++)
	{
		printf("nhap ten :\n");
		gets(a->ten);
		printf("nhap tuoi :\n");
		scanf("%d",&a->tuoi);
		fflush(stdin);
		printf("nhap msss:\n");
		scanf("%d",&a->mssv);
		a++;
	}
		*/
	}
}
void inra(sv_t a[] , int b)	
{
	int i=0;
	for(;i<b;i++)
	{
		printf("sinh vien so %d\n",i+1);
		printf("ten :%s\n",a[i].ten);
		
		printf("tuoi :%d\n",a[i].tuoi);
		
		printf("msss:%d\n",a[i].mssv);
	
	}
}
// 
// bai 1
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
int main()
{
	/*
	truong hop la bien
	cach 1
	sv_t sv1 = {
		.ten = "trinh van nhan",
		.tuoi = 23,
		.mssv = 10
		};
		printf("ten sin vien la %s\n",sv1.ten);
		printf("tuoi sin vien la %d\n",sv1.tuoi);
		printf("mssv sin vien la %d",sv1.mssv);
	cach 2
	sv_t sv ;
		sv.ten = "trinh van nhan";
		sv.tuoi = 23;
		sv.mssv = 10;
	truong hop la con tro
	sv_t *thongtin;
	thongtin->ten = "trinh van nhan";
	thongtin->tuoi = 23;
	thongtin->mssv = 10;
	*/
	/* vi du
	printf("%d\n",sizeof(sv_t));
	sv_t sv[len];
	int b ;
	nhapthongtin(sv,&b);
	inra(sv,b);
	*/
	infor_t a[len];
	int b;
	nhap(a,&b);
	sapxep(a,b);
	in(a,b);
}
