#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<time.h>

#define SIZE 10
int front = -1;
int rear  = -1;
int item[SIZE];
// khai bao cac ham trong chuomg trinh
int check_full(); // ham kiem tra tran
int check_empty(); // ham kiem tra rong
int enqueue(int value); // ham them phan tu trong queue
int dequeue(); // ham lay data tu queue
// Viet cac ham trong chuong trinh
int check_full()
{
	if(((front == 0)&&(rear == SIZE-1))||(front == rear+1))
	{
		return -1;
	}
	return 0;
}
int check_empty()
{
	if(front == -1)
	{
		return -1;
	}
	return 0;
}
int enqueue(int value)
{
	if(check_full()==-1)
	{
		printf("queue day\n");
		return -1;
	}
	if(front == -1)
	{
		front = 0;
	}
	rear = (rear+1)%SIZE;
	item[rear] = value;
}
int dequeue()
{
	if(check_empty()==-1)
	{
		printf("queue rong\n");
		return -1;
	}
	int data = item[front];
	if(front == rear) // truong hop con phan tu cuoi cung truoc khi queue rong
	{
		front = rear = -1;
	}
	else
	{
		front = (front +1)%SIZE;
	}
	return data;
}
void in_queue(int pt[])
{
	if(check_empty()==-1)
	{
		printf("khong co phan tu nao de lay ra\n");
	}
	int i = front;
	for(;i!=rear;i=(i+1)%SIZE)
	{
		printf("gia tri phan tu la %d\n",pt[i]);
	}
	printf("gia tri phan tu la %d\n",pt[rear]);
}
void them_phan_tu(int pt[])
{
	int i=0;
	while(i<50)
	{
	int a;
	enqueue(i);
	sleep(1);
	i++;
	//enqueue(i);
	//i++;
	//sleep(1);
	pt[i] = dequeue();
	printf("%d",pt[i]);
    }
}
int main()
{
	int pt[50];
    them_phan_tu(pt);
	return 0;
}
