//circular double linked list insertion at the beginning, at the end and at intermediate.
#include<stdio.h>
#include<stdlib.h>
struct node* addnode_toEmptylist();
struct node* addnode_atBeg();
struct node* addnode_atEnd();
struct node* addnode_atPos();
struct node* create_CLLD();
struct node* deletefirstnode();
struct node* deletelastnode();
struct node* deleteinternode();

void print();

struct node{
struct node *prev;
int data;
struct node *next;
};

struct node* addnode_toEmptylist(struct node *tail, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;

    tail=temp;
    return tail;
};
struct node* addnode_atBeg(struct node* tail,int data)
{
           struct node *temp = (struct node*)malloc(sizeof(struct node));
           temp->prev = NULL;
           temp->data= data;
           temp->next = NULL;

           struct node *head = tail->next;

           temp->next = head;
           temp->prev = tail;
           head->prev = temp;
           tail->next = temp;
           return tail;
};

struct node* addnode_atEnd(struct node *tail,int data)
{
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->prev = NULL;
  temp->data = data;
  temp->next = NULL;

  temp->next = tail->next;
  temp->prev = tail;
  tail->next->prev = temp;
  tail->next = temp;

  tail = temp;

return tail;
};
struct node* addnode_atPos(struct node *tail, int pos, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
           temp->prev = NULL;
           temp->data = data;
           temp->next = NULL;

           struct node *ptr,*head = tail->next;
           ptr =head;

           while(pos>2)
           {
               ptr =ptr->next;
               pos--;
           }
           temp->next = ptr->next;
           temp->prev = ptr;
           ptr->next->prev = temp;
           ptr->next = temp;

           if(ptr == tail)
           {
           tail = temp;
           }
return tail;
};

struct node* create_CLLD(struct node *tail,int n)
{
    int data;
   printf("Enter first node value");
   scanf("%d",&data);
   tail = addnode_toEmptylist(tail,data);

   for(int i =1;i<n;i++)
   {
     printf("Enter %d node value:", i+1);
     scanf("%d",&data);
     tail = addnode_atEnd(tail,data);

   }
return tail;
};
struct node* deletefirstnode(struct node* tail)
{
    if(tail == NULL)
        {
            printf("empty list");
        return;
        }
        if(tail->next == tail)
        {
            free(tail);
            tail = NULL;
            printf("empty list ");
            return NULL;
        }
    struct node *head = tail->next, *ptr;
    ptr = head;
    head = head->next;
    tail->next = head;
    head->prev =tail;
    free(ptr); ptr = NULL;
    return tail;
};

struct node* deletelastnode(struct node *tail)
{
    struct node *head = tail->next, *ptr;
    ptr =head;
    while(ptr->next!=tail)
    {
      ptr = ptr->next;
    }

    ptr->next = tail->next; //head;
    head->prev = ptr;
    free(tail);
    tail = ptr;
    return tail;
};
struct node* deleteinternode(struct node *tail,int pos)
{
    struct node *head = tail->next, *ptr,*temp;
    ptr = head;
    while(pos>2)
    {
        ptr = ptr->next;
        pos--;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev =ptr;
    if(temp == tail)
    {
        tail = ptr;
    }
    free(temp);
    temp = NULL;
    return tail;
};

void print(struct node *tail)
{
    struct node *head = tail->next,*ptr;
    ptr =head;
    do{
    printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr!=tail->next);

}
void printp(struct node *tail)
{
  struct node *ptr =tail;
    do{
    printf("%d ",ptr->data);
        ptr = ptr->prev;
    }while(ptr!=tail);

}

int main()
{
    int n, value;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *tail = NULL;
    tail = create_CLLD(tail,n);
    printf("list before deletion");
    print(tail);
    printf("list after deletion");
    int posd;
    printf("enter delete position");
    scanf("%d",&posd);
    tail = deleteinternode(tail,posd);
    print(tail);



    return 0;
}
