#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
nhap_mang(int *pt[],int a,int b)
{
	int i=0;
	for(;i<b;i++)
	{
		int j=0;
		for(;j<a;j++)
		{
			printf("nhap phan tu vao\n");
			scanf("%d",&pt[i][j]);
		}
	}
}
xuat_mang(int *pt[],int a,int b)
{
	int i=0;
	for(;i<b;i++)
	{
		int j=0;
		for(;j<a;j++)
		{
			printf("%d    ",pt[i][j]);
		}
		printf("\n");
	}
}
int main()
{
/* vi du 1
	int b=9;
	int *pt = &b;
	int a =178;
//	*pt =10; // loi doan nay 
//	pt = &a;
    int **ptt = &pt;
//  *ptt = &a;
  **ptt = a;
	printf("gia tri la %d\n",*pt); 
*/
int mang1[]={1,2,3};
int mang2[]={1,2,3};
int mang3[]={1,2,3};
int *pt[3];  //khai bao mang co phan tu la 3 con tro
pt[0]=mang1;
pt[1]=mang2;
pt[2]=mang3;
int a=3;
int b=3;
// khi khai báo mangr con tror thì phair gán luôn giá tri cho nó nhu ví du trên nêu không se sai 
nhap_mang(pt,a,b);
xuat_mang(pt,a,b);

/*
int i=0;
	for(;i<b;i++)
	{
		int j=0;
		for(;j<a;j++)
		{
			printf("nhap phan tu vao\n");
			scanf("%d",&pt[i][j]);
		}
		
	}
int d=0;
for(;d<3;d++)
	{
		int c=0;
		for(;c<3;c++)
		{
			printf("%d    ",pt[d][c]);
		}
		printf("\n");
	}
*/
return 0;
}
