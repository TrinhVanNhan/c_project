#include<stdio.h>
#include<string.h>
int main()
{
	// chia chuoi thanh cac chuoi nho
	char nhan[]="09/11/2001 - la ngay sinh nhan";
	char ngay[30];
	char thang[30];
	char *token = strtok(nhan,"/");
	while(token!=NULL) // neu token tro den mot vung nbho co gia tri
	{ 
		printf("%s\n", token);
		token=strtok(NULL,"/  -");//  trong dau " la cac ky tu dac biet ma tai do chuoi bi chia ra
	}
	strcpy(ngay,token);
	printf("ngay la %s",ngay);
	return 0;	
}
