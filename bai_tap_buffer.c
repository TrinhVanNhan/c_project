#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<math.h>
typedef struct{
volatile uint32_t head; // con tro den vi tri dau, dung de ghi vao
volatile uint32_t tail; // con tro den vi tri cuoi, dung de doc ra
volatile uint32_t Size; // kich thuoc cua buffer
volatile uint8_t *pt; // con tro den buffer cua ring
}BUFFER_t;

BUFFER_t ring; // khai bao mot ring
uint8_t buffer[100]; // khai bao mot buffer cho ring
int buffer_init(BUFFER_t *r,uint8_t *buf,uint32_t Size)//chuyen vao cac thong so: khoi tao Ringbufer, buf chua data, size bufer
{
	if(r == NULL || buf == NULL || Size<2)
	{
		return -1;
	}
	r->head = 0;
	r->tail = 0;
	r->Size = Size;
	r->pt = buf;
	return 0;
}
int RINGBUFFER_put(BUFFER_t *r, uint8_t value) // ham put data vao buffer
{
	uint32_t temp = r->head ;
	temp++;
	if(temp==r->Size) // ghi day thi reset cho no ghi tiep
	{
		temp = 0;
	}
	if(temp == r->tail) // check full
	{
		return -1;
	}
	r->pt[r->head] = value;
	r->head = temp;
}
int RINGBUFFER_get(BUFFER_t *r, uint8_t *value) // ham get data tu buffer
{
	if(r->tail == r->head ) // check rong
	{
		return -1;
	}
	*value = r->pt[r->tail];
	r->tail++;
	if(r->tail >= r->Size) // doc het thi reset cho no doc lai
	{
		r->tail = 0;
	}
	return 0;
}
int ring_buffer_printf(BUFFER_t *r)
{
	int i=r->tail; // dung de doc
	for(;i<r->head;i++)
	{
		printf("---%d\n",r->pt[i]);
	}
}
 int main()
{
	uint8_t ch;
	buffer_init(&ring,buffer,5);
	//while(1)
	//{
	RINGBUFFER_put(&ring, 1);
	RINGBUFFER_put(&ring, 2);
	RINGBUFFER_put(&ring, 3);
	RINGBUFFER_put(&ring, 4);
	RINGBUFFER_put(&ring, 5);
	RINGBUFFER_put(&ring, 6);
	ring_buffer_printf(&ring);
	RINGBUFFER_get(&ring, &ch);
	printf("-> %d\n",ch);
	RINGBUFFER_get(&ring, &ch);
	printf("-> %d\n",ch);
	RINGBUFFER_get(&ring, &ch);
	printf("-> %d\n",ch);
	RINGBUFFER_get(&ring, &ch);
	printf("-> %d\n",ch);
	ring_buffer_printf(&ring);
	//}
	return 0;
}
