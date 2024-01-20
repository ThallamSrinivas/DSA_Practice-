// Circular (singly) linked list: add a node to empty list: add node at start of list: add node at the end //insert between the nodes
//create Circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node* addnode_toEmptylist();
struct node* addnode_atBeg();
struct node* addnode_atEnd();
struct node* addnode_atPos();
struct node* create_CLL();
void print();
struct node{
int data;
struct node *link;
};

struct node* addnode_toEmptylist(struct node *tail, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;

    tail=temp;
    return tail;
};
struct node* addnode_atBeg(struct node* tail,int data)
{
           struct node *temp = (struct node*)malloc(sizeof(struct node));
           temp->data= data;
           temp->link = NULL;

           struct node *head = tail->link;
           temp->link = head;
           tail->link = temp;
           return tail;
};

struct node* addnode_atEnd(struct node *tail,int data)
{
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;

  temp->link = tail->link;
  tail->link = temp;
  tail = temp;

return tail;
};
struct node* addnode_atPos(struct node *tail, int pos, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
           temp->data = data;
           temp->link = NULL;

           struct node *ptr,*head = tail->link;
           ptr =head;

           while(pos>2)
           {
               ptr =ptr->link;
               pos--;
           }
           temp->link = ptr->link;
           ptr->link = temp;

           if(ptr == tail)
           {
           tail = temp;
           }
return tail;
};

struct node* create_CLL(struct node *tail,int n)
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
void print(struct node *tail)
{
    struct node *head = tail->link,*ptr;
    ptr =head;
    do{
    printf("%d ",ptr->data);
        ptr = ptr->link;
    }while(ptr!=tail->link);

}

int main()
{
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *tail = NULL;
    tail = create_CLL(tail,n);
    print(tail);
    return 0;
}
