//Doubly linked list : Delete node
#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
struct node* Addtoempty();
struct node* AddatBeg();
struct node* AddatEnd();
struct node* AddAfterPosition();
struct node* Addbeforeposition();
struct node* deletenode();
void print(struct node *head);
struct node{
struct node *prev;
int data;
struct node *next;
};
struct node* Addtoempty(struct node *head,int n)
{
    head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = n;
    head->next = NULL;
    return head;
};

struct node* AddatBeg(struct node *head,int n)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = n;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp; //head = temp;
    return temp;
};
struct node* AddatEnd(struct node *head,int n)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = n;
    temp->next = NULL;

    struct node *ptr =head; //ptr = head;
    while(ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;

    return head;
};
struct node* AddAfterPosition(struct node *head,int pos,int data)
{
    struct node *temp =NULL,*ptr =NULL;
       temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = data;
        temp->next = NULL;

        ptr =head;
        for(int i =1;i<=pos-1;i++)
        {
             ptr = ptr->next;
        }
        if(ptr->next==NULL)
        {
            ptr->next = temp;
        temp->prev = ptr;
        }
        else {
                struct node *temp2 = ptr->next;
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = temp2;
        temp2->prev = temp;
        }
return head;
};
struct node* Addbeforeposition(struct node *head, int pos,int data)
{
    struct node *temp =NULL,*ptr=NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    ptr =head;
    for(int i=1;i<=pos-2;i++)
    {
        ptr = ptr->next;
    }
    if(pos == 1)
    {
        head = AddatBeg(head,data);
    }
    else {
            struct node *temp2=ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = temp2;
    temp2->prev = temp;
    }
    return head;
};
struct node* deletenode(struct node *head, int pos)
{
struct node *ptr =head, *temp;
for(int i =1; i<=pos-2;i++)
{
    ptr = ptr->next;
}
temp = ptr->next; // pos node
ptr->next = temp->next;
temp->next->prev = ptr;
free(temp);
    return head;
};

void print(struct node *head)
 {
 struct node *ptr = head;
    while(ptr!=NULL)
    {
        // printf("\n %p %p %p  ",&ptr->prev,&ptr->data,&ptr->next);
        printf("%d  ",ptr->data);
        ptr= ptr->next;
    }
 }

int main()
{
    struct node *head =NULL, *ptr;
    head =Addtoempty(head,45);
    head =AddatBeg(head,96);
    head =AddatEnd(head,10);
    head =AddAfterPosition(head,2,31);//add after position (2)
    head =Addbeforeposition(head,3,8);//add before position (3)
    printf("list before deletion");
    print(head);

    printf("List After deletion");
    head =deletenode(head,3);
    print(head);

    return 0;
}
