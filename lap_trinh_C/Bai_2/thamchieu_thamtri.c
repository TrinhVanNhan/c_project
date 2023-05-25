#include<stdio.h>
void pt_bac_nhat(float *a,float *b)
{ 
    float n;
    printf ("nhap cac tham so vao\n");
	scanf("%f%f",a,b);
	if(a==0&b!=0)
	  {
	  	printf("pt vo nghiem");
	  }
	if(a==0&b==0)
	  {
	  	printf("pt vo so nghiem");
	  }
	if(a!=0) 
	 
	   {
	   	n= -(*b)/(*a);
	   	printf("pt co nghiem %f",n);
	   }
	 
}
int main()
{
	float x , y ,n;
	
	pt_bac_nhat(&x,&y);

	return 0;
}
