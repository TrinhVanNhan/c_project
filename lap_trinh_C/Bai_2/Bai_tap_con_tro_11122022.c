#include<stdio.h>
#include<string.h>

int dodaichuoi(char s[])
{   
	char *tro = &s[0];
	int dem=0;
	while(*tro )
	{
		dem++;
		tro++;
	}
    printf("do dai cua chuoi la %d ", dem);
}
int tong (int *a , int *b)
{
	return *a + *b ;
}
void nhapmang( int mang[] , int n)
{
	int *pt ;
	pt = &mang[0];
	int i = 0;
	for(;i<n;i++)
	{
		printf("Nhap vao phan tu thu %d \n",i);
		scanf("%d",pt+i);
		
	}	
}
void daonguocmang(int mang[], int n)
{
	int *pt=&mang[0];
	pt = &mang[n-1];
	printf("in ra mang nguoc \n");
	printf("%d  ",*pt);
	while(pt!=mang)
	{  
	  pt--;
	  printf("%d   ",*pt);
    }
}
void xuatmang(int mang[], int n)
{   
    int *pt ;
    int t=0;
	pt = &mang[0];
	int j = 0;
	for(;j<n;j++)
	{
		t = t + *(pt+j);
		printf("phan tu thu %d la %d \n",j,*(pt+j));
	}
	printf("tong la %d \n",t);

}
int main()
{ 
    
    
    int m[5];
    nhapmang(m,5);
    daonguocmang(m,5);
  //  xuatmang(m,5);
    
	return 0;
}
