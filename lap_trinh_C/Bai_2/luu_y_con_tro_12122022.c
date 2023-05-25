#include<stdio.h>
#include<string.h>
int main()
{
   const char s1[]="nhan dep trai ";//khai bao vung nho hang// vung nho hang la khong the thay doi// const ma tron ham thi se nham trong vung nho stack//
// khi them const vao truoc bien thi tuc la khong the thay doi bang phep gan ma chi doi bang con tro

	char *s2="deviot";
	char *pt = s1;
	*pt='h';
	printf("%s",s1);
	const int *pt = &a; // vi du khai bao vung nho hang la vung nho chi doc gia tri ma khong the thay doi hay ghi gtri khac 
                   // con tro hang co the tro den vung nho hang va ca vung nho stack
    int *const pt = &b ; // khai bao hang con tro               
}
// con tro hang la con tro tro den 1 vung nho hang chi doc duoc gia tri vung nho chu k ghi duoc . Dam bao nguyen ven vung nho ma no tro den
// hang con tro la khong the thay doi duoc dia chi vung nho ma no tro toi . Van doc va ghi gia tri vung nho nhu binh thuong 
// khac nhau  cua con tro hang va hang con tro la con tro hang co the thay doi vung nho tro den trong khi do thi  hang con tro k the thay doi vung nho ma no tro toi 
// Diem khac nhau thu hai la con tro hang chi co the doc chu khong thay doi duoc vung nho trong khi do thi hang con tro co the thay doi gia tri vung nho 
// cap phat dong la cap phat vung nho heap va no se khong tu mat di khi ra khoi ham , no chi bien mat khi dung ham fee()
// luon luon luu y cai nao can tra ve cai nao k
