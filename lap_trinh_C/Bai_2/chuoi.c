#include<stdio.h>
#include<string.h>
int main()
{
	char ho[]="trinh";
	char ten[] ="vannhan";
	int dodai = strlen(ho);
	int sosanh= strcmp(ho,ten);
	if(sosanh>0)
	{
		printf("chuoi ho lon hon ten\n");
	}
	if(sosanh<0)
	{
		printf("chuoi ho be hon chuoi ten \n");
	}
	printf("%d\n",dodai);
	strcpy(&ho[4],ten);
	printf("%s\n",ho);
	strcat(ten,ho);
	printf("%s",ten);
	return 0;
}
