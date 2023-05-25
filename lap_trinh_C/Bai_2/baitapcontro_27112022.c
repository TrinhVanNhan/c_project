#include<stdio.h>
#include<stdlib.h>
void nhapmang(int n , int*a)
{
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",a+i);
	}
}
void xuatmang( int n,int*a)
{
	int j=0;
	for(;j<n;j++)
	{
		printf("phan tu thu %d la %d\n",j,*(a+j));
	}
}
// cap phat dong  maloc , calloc thuong su dung calloc vi an toan hon 
// cu phap calloc la contro= m=calloc(so phan tu , sizeof(kieu du lieu))
int main()
{   
	int *a ;
	a = calloc(5, sizeof(int));
	printf("%d\n",a);
	nhapmang(5,&a[0]);
	xuatmang(5,&a[0]);
//	printf("%d",a);
	free(a);// de giai phong vung nho khi cap phat dong neu k giai phong se mac loi memory leak la loi khi vung nho bi day//han che su dung
//	printf("%d",a);
	return 0;
	
}
