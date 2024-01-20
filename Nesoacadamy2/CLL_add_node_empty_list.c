// Circular (singly) linked list: add a node to empty list
#include<stdio.h>
#include<stdlib.h>
struct node* addnode_toEmptylist();
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

int main()
{
    int n;
    struct node *tail = NULL;
    printf("Enter the first value to the node");
    scanf("%d",&n);
    tail = addnode_toEmptylist(tail,n);
    printf("%d",tail->data); // print function is not required for first node.
    return 0;
}
