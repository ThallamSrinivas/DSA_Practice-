//Sorted linked list insert a new node
#include<stdio.h>
#include<stdlib.h>
struct node* addnode_toEmptylist();
struct node* addnode_atBeg();
struct node* addnode_atEnd();
struct node* addnode_atPos();
struct node* create_CLL();
struct node* insert();
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
          if(pos ==1)
          {
             tail = addnode_atBeg(tail,data);
          }
           else
           {
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
struct node* insert(struct node *tail, int val)
{
    struct node *ptr, *head = tail->link;
    ptr =head;
    int pos = 1;
    while(ptr!=tail)
    {
        if(ptr->data<val)
        {
            pos++;
         ptr=ptr->link;
        }
        else{
        break;
        }

    }
          if(tail->data<val)
          {
              pos++;
          }
           tail = addnode_atPos(tail,pos,val);
           return tail;
}
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
    int n,val;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *tail = NULL;
    tail = create_CLL(tail,n);
    printf("List before insertion");
    print(tail);
    printf("Enter new value");
    scanf("%d",&val);
    tail = insert(tail,val);
    printf("List after insertion");
    print(tail);
    return 0;
}
