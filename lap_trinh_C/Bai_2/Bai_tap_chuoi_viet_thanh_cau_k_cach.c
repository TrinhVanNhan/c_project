#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Deviot hoc that lam that dao tao that";
	char moi[]="";
	char *token= strtok(s1," ");
	while(token!=NULL)
	{    
	    strcat(moi,token);
		token = strtok(NULL," ");
		
	}
	printf("%s",moi);
	return 0;
}
