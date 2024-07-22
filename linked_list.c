#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// khoi tao 1 node
typedef struct node{
	int data;
	struct node *next;
}node_t;
void printList(node_t*head)
{
	node_t *pt = head; // tao ra mot con tro de tranh sai lech con tro head
	while(pt!=NULL) // khi chay den day thi pt cuoi cung nhan gia tri NULL
	{
		printf("%d\n",pt->data);
		pt = pt->next; 
	}
}
void timmaxdata(node_t* head)
{
	node_t* pt = head;
	int max = head->data; 
	while(pt != NULL)
	{
		if(pt->data >= max)
		{
		  max = pt->data;
		}
		pt = pt-> next;
	}
	printf("gia tri max la %d\n",max);
}
// them phan tu vao list

static node_t *taoNode(int giatri) // tao mot Node moi
{
	node_t *moi = (node_t*)malloc(sizeof(node_t));
	moi->data = giatri;
	moi->next = NULL;
	return moi;
}
// TH1 them vào dau danh sach
void them_vao_dau_list(node_t **head,int giatri)// ham them vao dau list
{
	node_t* newNode = taoNode(giatri);
	if(*head == NULL) // TH mà List chua có Node nao
	{
		*head = newNode; // tuc là day se la Node dau tiên cua List
	}
	else
	{
		newNode->next = *head; // tro next cua newNode den head
		*head = newNode; // phan tu head la dau List se la phan tu newNode
	}
}
// TH2 them vào bat ky vi tri nao trong danh sach
void them_bat_ki(node_t *head,int giatri,int vitri)
{
	node_t * pt = head;
	int k=0;
	while(pt != NULL&& k != vitri-1)
	{
		pt = pt->next;
		k++;
	}
	node_t* newNode = taoNode(giatri);
	newNode->next = pt->next;
	pt->next = newNode;
}
// TH3 them mot ham vao cuoi list
void them_cuoi_list(node_t* head, int giatri)
{
	node_t *pt = head;
	while(pt->next  != NULL) // khi chay den day thi pt cuoi cung chinh là cuoi list
	{
		pt = pt->next;
	}
	node_t* newNode = taoNode(giatri);
	pt->next = newNode;
}
// TH4 xoa mot node o dau list
void xoa_dau_list(node_t** head)
{
	node_t* pt = *head;
	int k=0;
	node_t* ptt = NULL;
	while(pt != NULL && k!=1)
	{
		ptt = pt;
		pt = pt->next;
		k++;
	}
	*head = pt;
	free(ptt);
}
// TH5 xoa mot node o cuoi list
void xoa_cuoi_list(node_t* head)
{
	node_t *pt = head;
	int k=0;
	while(pt->next !=NULL)
	{
		pt = pt->next;
		k++; 
	}
    pt = head;
	int a=0;
	node_t *ptt = NULL;
	while(a!= k-1)
	{
		pt = pt->next ;
		ptt = pt;
		a++;
	}
	pt->next = NULL;
	free(ptt);
}
// TH6 xoa mot node o vi tri bat ky
void xoa_bat_ky(node_t* head, int vitri)
{
	node_t *pt = head;
	int k=0;
	node_t *ptt = NULL;
	if(vitri==1)
	{
		ptt = pt;
		pt = pt->next;
	}
	else if(vitri!=1)
	{
	while(pt->next !=NULL && k!= vitri-1)
	{
		ptt= pt;
		pt = pt->next;
		k++; 
	}
	}
	ptt->next = pt->next;
	free(pt);
}
int main()
{
	// khoi tao 3 node
	node_t* head = NULL;
	node_t* second = NULL;
	node_t* third = NULL;
	// cap phat bo nho cho cac node
	head = (node_t*)malloc(sizeof(node_t)); // cap phat dong cho con tro
	second = (node_t*)malloc(sizeof(node_t));
	third = (node_t*)malloc(sizeof(node_t));
	// them du liêu cho cac node
	head->data = 0;
	head->next = second;
	second->data = 1;
	second->next = third;
	third->data = 2;
	third->next = NULL;
	printList(head);
	timmaxdata(head);
	them_vao_dau_list(&head,80);
	printList(head);
	them_bat_ki(head,90,4);
	printf("gia tri list moi la\n");
	printList(head);
	printf("gia tri list moi la\n");
	them_cuoi_list(head,21);
	xoa_dau_list(&head);
	printList(head);
	printf("gia tri list moi la\n");
	xoa_cuoi_list(head);
	printList(head);
	printf("gia tri list moi la\n");
	xoa_bat_ky(head,1);
	printList(head);
	return 0;
}
