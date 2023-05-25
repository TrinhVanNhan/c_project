#include<stdio.h>
char ten[30];
int tuoi;
void nhap_thong_tin_ca_nhan(void)
{
	printf("nhap ten vao \n");
	gets(ten);
	printf("nhap tuoi vao\n");
	scanf("%d",&tuoi);
	printf(" ten  la\n %s",ten);
	printf("\ntuoi la\n %d",ten);
}
void tinh_tong(int a ,int b,int c)
{
	int tong;
	tong=a+b+c;
	printf("ket qua la %d",tong);
	
}
int main()
{
	tinh_tong(5,6,7);
	return 0;
}
