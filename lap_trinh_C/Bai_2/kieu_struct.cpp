#include<stdio.h>
#include<string.h>
#include<stdint.h>
typedef char u8 ; // vi du dinh nghia kieu du lieu moi la u8 tuong duong voi char
typedef struct 
{
	char ten[30];
	int tuoi ;
	char sdt[20];
	int lop ; 
} sv_infor_t; // tuong duong tao mot kieu du lieu moi la sv_infor_t 
int main()
{
    sv_infor_t SV1;
    strcpy(SV1.ten,"Trinh Van Nhan");
    SV1.tuoi=22;
    strcpy(SV1.sdt,"0988097390");
    SV1.lop=13;
    printf("Ten  : %s\n",SV1.ten);
    printf("Tuoi : %d\n",SV1.tuoi);
    printf("Sdt  : %s\n",SV1.sdt);
    printf("Lop  : %d\n",SV1.lop);
	return 0;
}
