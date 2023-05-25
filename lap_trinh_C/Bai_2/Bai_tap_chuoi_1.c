#include<stdio.h>
#include<string.h>
int main()
{
	// tim ky tu 't' trong chuoi "deviot.vn"
	char s1[]="deviot.vn";
    char kytucantim[2];
    printf("nhap ky tu can tim vao ");
    gets(kytucantim);
    char *str = strstr(s1,kytucantim);
    printf("%s la phan tu thu %d\n",kytucantim,str-s1);
    printf("%d",s1);
	return 0;
}
