#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
typedef struct {
	char *ten;
	char tuoi;
	char mssv;
	}sv_t;
int capbonho(int **pt,int n)
{
	*pt = calloc(n,sizeof(int));
}
void xuat_mang(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("phan tu thu %d la: %d \n",i,a[i]);
	}

}
void xoa(char*pt, char *n)
{
	int a;
	printf("nhap vao phan tu can xoa\n");
	scanf("%d",&a);
	int i=a;
	int j=a+1;
	for(;i<*n-1;i++)
	{
		for(;j<*n;j++)
		{
			pt[i]=pt[j];
		}
	}
	*n=*n-1;
}
int main()
{ 
/*
	sv_t sv1;
	sv1.ten =calloc(30,sizeof(char));
	gets(sv1.ten);
	printf("ten la %s\n",sv1.ten);
	free(sv1.ten);
*/
   
	int **pt ;
	*pt = capbonho(pt,10);
	int i=0;
	for(;i<10;i++)
	{
		printf("phan tu thu %d la :\n",i);
		scanf("%d",&*pt[i]);
		pt++;
	}
int j=0;
	for(;j<10;j++)
	{
		printf("phan tu thu %d la: %d \n",j,*pt[j]);
	}
/*
xuat_mang(pt,10);

printf("%d\n",pt[0]);
printf("%d",pt[1]);
*/
free(pt);
return 0;		
}
