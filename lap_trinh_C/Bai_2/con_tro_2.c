#include<stdio.h>
int main ()
{
unsigned char mang[12]={0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0X0C};
int *pt ;
   pt= mang;
	int i=0;
	for(;i<3;i++)
	{  printf("pt = %d \n",pt);
		printf("%x \n",*pt);// pt+1 la nhay sang mot phan tu
		
		pt=pt+1;
	}
	return 0;
}
