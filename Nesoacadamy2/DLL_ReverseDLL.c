//Doubly linked list : Reverse Double linked list
#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
struct node* Addtoempty();
struct node* AddatBeg();
struct node* AddatEnd();
struct node* AddAfterPosition();
struct node* Addbeforeposition();
struct node* reverselist();
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

struct node* reverselist(struct node *head)
{

    if(head->next ==NULL)
    {
        return head;
    }
    else{
       struct node *temp0=NULL, *temp1 = NULL;

       while(head!=NULL)
       {
       temp1 = head->next;
       head->next =temp0;
       head->prev = temp1;
       temp0 = head;
       head = temp1;
        }
        return temp0;
    }

};
void print(struct node *head)
 {
 struct node *ptr = head;
    while(ptr!=NULL)
    {
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
    printf("Original List");
    print(head);

    printf("Reverse List");
    head =reverselist(head);
    print(head);

    return 0;
}
