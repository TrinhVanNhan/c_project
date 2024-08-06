#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<math.h>
typedef enum{
 NHAP ,
 THEM ,
 SAPXEP ,
 XUAT 
}chucnang_t;
typedef struct{
	char ten[8];
	char mssv[5];
	char toan;
}infor_t;

int nhap(infor_t *sv,int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("nhap infor sinh vien thu %d\n",i+1);
		gets(sv[i].ten);
		gets(sv[i].mssv);
		if(strlen(sv[i].mssv)!=4)
		{
			printf("nhap lai mssv\n");
			gets(sv[i].mssv);
		}
		scanf("%d",&sv[i].toan);
		fflush(stdin);	
	}
}
void sapxep(infor_t *sv, int n)
{
	int i=0;
	for(;i<n;i++)
	{
		int j=i;
		{
			if(sv[i].toan < sv[j].toan)
			{
				char a = sv[i].toan ;
				sv[i].toan = sv[j].toan;
				sv[j].toan = a;
			}
		}
	}
}
void them(infor_t *sv, int *n)
{
	int t;
	printf("nhap so sinh vien can them\n");
	scanf("%d",&t);
	fflush(stdin);
	int i=0;
	for(;i<t;i++)
	{
	printf("nhap infor sinh vien them\n");
	printf("nhap infor sinh vien thu %d\n",i+1);
		gets(sv[*n].ten);
		gets(sv[*n].mssv);
		if(strlen(sv[*n].mssv)!=4)
		{
			printf("nhap lai mssv\n");
			gets(sv[*n].mssv);
		}
		scanf("%d",&sv[*n].toan);
		fflush(stdin);
	*n++;
	}
}
void xuat(infor_t *sv, int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("infor sinh vien thu %d la\n",i+1);
		printf("%s\n",sv[i].ten);
		printf("%s\n",sv[i].mssv);
		printf("%d\n",sv[i].toan);
		printf("----------\n");
	}
}
void menu(chucnang_t chucnang, infor_t *sv, int n)
{
	chucnang = NHAP;
	while(1)
	{
		switch (chucnang)
		{
		case NHAP:
		nhap(sv, n);
		chucnang = THEM;
		break;
		
		case THEM:
		them(sv, &n);
		chucnang = SAPXEP;
		break;
		
		case SAPXEP:
		sapxep(sv, n);
		chucnang  = XUAT;
		break;
		
		case XUAT:
		xuat(sv, n);
		chucnang = NHAP;
		break;
		
		default:
		break;
	   }
	}
}
int main()
{
	infor_t sv[5];
	chucnang_t chucnang;
	menu(chucnang, sv, 2);
	return 0;
}
