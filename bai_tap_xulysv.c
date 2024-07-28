#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	char ho[7];
	char dem[7];
	char name[7];
}hovaten_t;
typedef struct{
	float toan;
	float ly;
	float hoa;
	float tb;
}diem_t;
typedef struct{
	hovaten_t ten;
	char tuoi;
	char gt[4];
	char mssv[6];
	diem_t diem;
}infor_t;

void nhap_mang(infor_t sv[],int *n)
{
	int i=0;
	for(;i<*n;i++)
	{
    printf("nhap vao ho va ten sinh vien\n");
	gets(sv[i].ten.ho);
	gets(sv[i].ten.dem);
	gets(sv[i].ten.name);
	printf("nhap vao tuoi sinh vien\n");
	scanf("%d",&sv[i].tuoi);
	fflush(stdin);	
	printf("nhap vao gioi tinh sinh vien\n");
	gets(sv[i].gt);
	printf("nhap vao mssv sinh vien\n");
	scanf("%d",&sv[i].mssv);
	fflush(stdin);	
	printf("nhap vao diem toan sinh vien\n");
	scanf("%f",&sv[i].diem.toan);
	fflush(stdin);
	printf("nhap vao diem ly sinh vien\n");
	scanf("%f",&sv[i].diem.ly);
	fflush(stdin);
	printf("nhap vao diem hoa sinh vien\n");	
	scanf("%f",&sv[i].diem.hoa);
	fflush(stdin);	
	}
}

void xuat_mang(infor_t sv[],int *n)
{
	int i=0;
	for(;i<*n;i++)
	{
    printf(" ho va ten sinh vien : %s ",sv[i].ten.ho);
    printf("%s ",sv[i].ten.dem);
    printf("%s\n ",sv[i].ten.name);
	printf(" tuoi sinh vien : %d\n",sv[i].tuoi);
	printf(" gioi tinh sinh vien : %s\n",sv[i].gt);
	printf(" mssv sinh vien : %d\n",sv[i].mssv);
	printf(" diem toan sinh vien : %f\n",sv[i].diem.toan);
	printf(" diem ly sinh vien : %f\n",sv[i].diem.ly);
	printf(" diem hoa sinh vien : %f\n",sv[i].diem.hoa);	
	printf(" diem tb sinh vien : %f\n",(sv[i].diem.hoa+sv[i].diem.toan+sv[i].diem.ly)/3);	
	}
}

void themsinhvien(infor_t sv[],int *n,infor_t sv1)
{
	printf("nhap vao ho va ten sinh vien\n");
	gets(sv1.ten.ho);
	gets(sv1.ten.dem);
	gets(sv1.ten.name);
	printf("nhap vao tuoi sinh vien\n");
	scanf("%d",&sv1.tuoi);
	fflush(stdin);	
	printf("nhap vao gioi tinh sinh vien\n");
	gets(sv1.gt);
	printf("nhap vao mssv sinh vien\n");
	scanf("%d",&sv1.mssv);
	fflush(stdin);	
	printf("nhap vao diem toan sinh vien\n");
	scanf("%f",&sv1.diem.toan);
	fflush(stdin);
	printf("nhap vao diem ly sinh vien\n");
	scanf("%f",&sv1.diem.ly);
	fflush(stdin);
	printf("nhap vao diem hoa sinh vien\n");	
	scanf("%f",&sv1.diem.hoa);
	fflush(stdin);	
	*n=*n+1;
	sv[*n-1]=sv1;
}
 void timsv(infor_t sv[],int *n,char sinhvien[20])
{
	printf("nhao vao ten sinh vien can tim\n");
	gets("sv");
	int i=0;
	for(;i<*n;i++)
	{
	char *pt = strstr(sinhvien,sv[i].ten.ho); 
	char *ptt = strstr(sinhvien,sv[i].ten.dem);
	char *pttt = strstr(sinhvien,sv[i].ten.name);
	if((pt!=NULL)&&(ptt!=NULL)&&(pttt!=NULL))
	{
	printf(" ho va ten sinh vien : %s ",sv[i].ten.ho);
    printf("%s ",sv[i].ten.dem);
    printf("%s\n ",sv[i].ten.name);
	printf(" tuoi sinh vien : %d\n",sv[i].tuoi);
	printf(" gioi tinh sinh vien : %s\n",sv[i].gt);
	printf(" mssv sinh vien : %d\n",sv[i].mssv);
	printf(" diem toan sinh vien : %f\n",sv[i].diem.toan);
	printf(" diem ly sinh vien : %f\n",sv[i].diem.ly);
	printf(" diem hoa sinh vien : %f\n",sv[i].diem.hoa);	
	printf(" diem tb sinh vien : %f\n",(sv[i].diem.hoa+sv[i].diem.toan+sv[i].diem.ly)/3);	
	}
	}
}
int main()
{
	int a=1;
	int *n = &a;
	infor_t sv[*n];
	infor_t sv1;
	char sinhvien[20];
	nhap_mang(sv,n);
	themsinhvien(sv,n,sv1);
	timsv(sv,n,sinhvien);
//	xuat_mang(sv,n);
	return 0;
}
