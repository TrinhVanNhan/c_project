#include<stdio.h>
#include<string.h>
void tinh_do_dai_chuoi( char s[])
{   int dem;
	printf("nhap chuoi can tinh vao\n");
	gets(s);
	int i=0;
	for(;s[i];i++)
	{
	    dem=i+1;	
	}
	printf("do dai cua chuoi la %d\n",dem);
}
void kiem_tra_ky_tu(char s[])
{   int i=0;
    int dem=0;
	char kytu[2];
	printf("nhap vao ky tu\n");
	gets(kytu);
	char *timkiem;
	timkiem=strstr(s,kytu);
	if(timkiem!=NULL)
	{
		printf("ky tu co trong chuoi\n");
		for(;s[i];i++)
		{
			if(kytu[0]==s[i])
		     {
		     		dem=dem+1;
			 }
		}
	}
	if(timkiem==NULL)
	{
		printf("khong coky tu trong chuoi\n");
	}
	printf("so lan xuat hien la %d",dem);
}
int main()
{   
    char s1[30];
    tinh_do_dai_chuoi(s1);
    kiem_tra_ky_tu(s1);
	return 0;
}
