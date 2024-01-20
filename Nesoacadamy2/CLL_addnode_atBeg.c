// Circular (singly) linked list: add a node to empty list: add node at start of list
#include<stdio.h>
#include<stdlib.h>
struct node* addnode_toEmptylist();
struct node* addnode_atBeg();
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
    struct node *tail = NULL;
    printf("Enter the first value to the node");
    scanf("%d",&n);
    tail = addnode_toEmptylist(tail,n);
    printf("Enter the next value to the node");
    scanf("%d",&n);
    tail = addnode_atBeg(tail,n);
    print(tail); // print function is not required for first node.
    return 0;
}
