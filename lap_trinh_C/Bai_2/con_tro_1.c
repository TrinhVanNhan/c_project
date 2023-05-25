#include<stdio.h>
int main()
{

	int x=1000; // tuong duong voi 0x03E8(000003E8) he hexa(16) int lay 4byte trong bo nho con char lay 1 byte 
	// khi khai bao con tro con tro se lay vung nho bang dung kieu du lieu khai bao nhu int thi lay 4byte , char lay 2byte , unsigned char lay 1 byte ....
	unsigned char *pt;
	pt = &x;
	printf(" %02x\n ",*pt);
	printf("%02x\n ",*(pt+1));
	printf("%02x\n ",*(pt+2));
	printf("%02x ",*(pt+3));
	return 0;
}
