#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define SIZE 5
int items[SIZE];
int front = -1;
int rear = -1;
int check_full();
int check_empty();
int check_full(void)
{
	if(((front == 0)&&(rear == SIZE - 1)) || (rear +1 == front)) // kiem tra co co day khong
	{
		return -1;
	}
	return 0;
}
int check_empty(void) // kiem tra xem co rong khong
{
	if(front == -1)
	{
		return -1;
	}
	return 0;
}
int enqueue(int value) // ham them phan tu cho queue
{
	if(check_full()) // check xem co day khong de them phan tu
	{
		printf("Queue full\n");
		return -1;
	}
	if(front == -1) // TH ma chua bo phan tu nao vao queue 
	{
		front = 0;
	}
	rear = (rear + 1)%SIZE; // thiet lap rear moi trong queue tron
	items[rear] = value;
}
int dequeue() // lay phan tu ra khoi queue
{
	if(check_empty()) // check xem co rong khong de lay phan tu ra
	{
		printf("Queue rong\n");
		return -1;
	}
	int element = items[front]; // lay data ra
	if(front == rear) // TH ma da lay het data và queue rong
	{
		front = rear = -1; //reset lai front và rear ve -1;
	}
	else  // con neu van con data thi cap nhat lai front
	{
		front = (front +1)%SIZE;
	}
	return element;
}
void in_queue(void)// ham in ra queue
{
	if(front == -1) // check xem co rong hay khong
	{
		printf("queue rong\n");
		return;
	}
	int i = front;
	for(;i != rear; i = (i+1)%SIZE) // in thieu gia tri cuoi
	{
		printf("du lieu la %d\n",items[i]);
	}
	printf("du lieu la %d\n",items[rear]); // in bu phan tu cuoi cung trong queue // co the in la printf("du lieu la %d\n",items[i]);
}
int main()
{
	enqueue(1);
	enqueue(5);
	enqueue(4);
	enqueue(3);
	enqueue(2);
	dequeue();
	dequeue();
	enqueue(789);
	enqueue(7891);
	in_queue();
	return 0;
}
