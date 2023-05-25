#include<stdio.h>
#include<string.h>
int main()
{
	char ten[30] = "nhandeptrai ";
	char s1[] = "abc";
	strcpy(&ten[12],s1);
    printf("%d \n",strlen(ten));
	printf("ten ban la %s",ten);
	
	return 0 ;
}
