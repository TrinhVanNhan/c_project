#include<stdio.h>
#include<string.h>
#include<stdint.h>

typedef struct 
{
	char ten[30];
	int tuoi ;
	char sdt[20];
	int lop ; 
} sv_infor_t; 
int main()
{
    sv_infor_t SV1;
    printf("dia chi struct : %x\n",&SV1);
    printf("dia chi ten : %x\n",&SV1.ten);
    printf("dia chi tuoi : %x\n",&SV1.tuoi);
    printf("dia chi sdt : %x\n",&SV1.sdt);
    printf("dia chi lop : %x\n",&SV1.lop);
   
}
