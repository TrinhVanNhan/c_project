#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// API cua queue 
#define SIZE 10 // kich thuoc queue
int items[SIZE];
int front =-1;
int rear  =-1;
int enqueue(int value) // h�m nh�t th�m phan tu
{
	if(rear == SIZE-1) // check queue full hay khong
	{
		printf("queue da day\n");
		return -1; // tra ve trang thai, -1 l�  l�i
	}
	if(front == -1)
	{
		front = 0;
	}
	rear++;
	items[rear] = value; // nhet vao th� con tro l� rear
	return 0;
}
int dequeue(void) // ham lay data
{
	if(front == -1) // queue rong, c� th� check l� rear == -1
	{
		printf("queue rong\n");
		return -1; // tra ve trang thai, -1 l�  l�i
	}
	int data;
	data = items[front]; // lay ra th� con tro l� front
	front++;
	if(front >rear)
	{
		front = -1;
		rear =  -1;
	}
	return data;
}
void in_queue(void)
{
	if(front == -1)
	{
		printf("queue rong\n");
		return;
	}
	int i=front;
	for(;i<=rear;i++)
	{
		printf("du lieu la %d\n",items[i]);
	}
}
//
// bai tap
// Them 10 phan tu vao queue
// Lay ra cac phan tu queue vao 1 mang
// in ra cac phan tu chan cua mang
void them_queue(void)
{
	int i=0;
	for(;i<10;i++)
	{
		int a;
		printf("nhap vao phan tu them\n");
		scanf("%d",&a);
		enqueue(a);
	}
}
void lay_queue(int pt[])
{
	int i=0;
	for(;i<10;i++)
	{
		pt[i]=dequeue();
	}
}
void inchan(int pt[])
{
	int i=0;
	for(;i<10;i++)
	{
		if(pt[i]%2==0)
		{
			printf("phan tu chan la %d\n",pt[i]);
		}
	}
}
int main()
{
	int pt[10];
	them_queue();
	lay_queue(pt);
	inchan(pt);
	return 0;
}
