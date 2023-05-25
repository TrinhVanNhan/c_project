#include<stdio.h>
#include<stdbool.h>
int main()
{
	int n;
	printf("nhap so vao");
	scanf("%d",&n);
	int i=3;

	for(;i<=n;i++)
	{   
		int j=2;
		bool snt = true;
		for(;j<i;j++)
		{
			if(i%j==0)
			{
				snt = false;
			  
			}
		
		}
		if(snt==true)
			{
				printf("%d la so nguyen to\n",i);
			}
    }
    return 0;
}
