#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>
// khai bao buffer
typedef struct{
volatile uint32_t head; // khoi tao gia tri phan tu dau = front trong queue tron ( coi nhu con tro ghi )
volatile uint32_t tail; // khoi tao gia tri phan tu cuoi = rear trong queue tron ( coi nhu con tro doc) 
volatile uint32_t size; // size cua buffer
volatile uint8_t *pt; // con tro chi den buffer cua ring
}RINGBUFER;
/*
Nguyen ly put va get cung nhu queue tron, quan ly hai qua trinh do thong qua hai bien la head va tail nhu trong queue tron.
Khi put (ghi) thi head tang con tail giu nguyen lay chi so mang theo head , con khi ghi thi tail tang con head giu nguyen thong so lay theo tail 
khac voi queue thi ringbufer ghi lien tuc duoc 
*/
int RINGBUFFER_init(RINGBUFER *r, uint8_t *buf, uint32_t size) // chuyen vao cac thong so: khoi tao Ringbufer, buf chua data, size bufer
{
	if(r->pt == NULL||buf == NULL||size<2)
	{
		return -1;
	}
	r->head = 0;
	r->tail = 0;
	r->size = size;
	r->pt = buf;
	return 0;
}
int RINGBUFFER_put(RINGBUFER *r, uint8_t value) // ham put data vao buffer
{
	uint32_t temp = r->head ;
	temp++;
	if(temp==r->size) // ghi day thi reset cho no ghi tiep
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
int RINGBUFFER_get(RINGBUFER *r, uint8_t *value) // ham get data tu buffer
{
	if(r->tail == r->head ) // check rong
	{
		return -1;
	}
	*value = r->pt[r->tail];
	r->tail++;
	if(r->tail >= r->size) // read het thi reset cho no doc lai
	{
		r->tail = 0;
	}
	return 0;
}
int main()
{
	return 0;
}
