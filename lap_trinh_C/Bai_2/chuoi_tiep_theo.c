#include<stdio.h>
#include<string.h>
int main()
{
	char hovaten[]="trinhvannhan";
	char ten[]="nhan";
	char *str= strstr(hovaten,ten);
	if(str==NULL)
	{
		printf("trong chuoi me khong co chuoi can tim\n");
	}
	if(str)
	{
		printf("trong chuoi me co chuoi can tim tai phan tu thu %d\n",str-hovaten);
	}
	printf("hovaten =%d\n",hovaten);
	printf("str =%d\n",str);
	printf("%s",str);
	return 0;
	
}
