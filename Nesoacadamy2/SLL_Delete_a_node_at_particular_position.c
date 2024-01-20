//single linked list : Delete a node at particular position
#include<stdio.h>
#include<stdlib.h>
struct node* add_n_node();
void delete_node();
struct node{
int data;
struct node *link;
};
int main()
{
   struct node *head =(struct node*)malloc(sizeof(struct node));
    head->data =45;
    head->link = NULL;
    struct node *cur_ptr =head;
    cur_ptr =add_n_node(cur_ptr,68);
    cur_ptr =add_n_node(cur_ptr,96);
    cur_ptr =add_n_node(cur_ptr,89);
    cur_ptr =add_n_node(cur_ptr,10);
    delete_node(head,3); //pos =3;

    cur_ptr =head;
    while(cur_ptr!=NULL)
    {
        printf("%d  ",cur_ptr->data);
        cur_ptr = cur_ptr->link;
    }
    return 0;
}
struct node* add_n_node(struct node *head,int n)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->link =NULL;
    head->link =temp;
    return temp;
}

void delete_node(struct node *head,int pos)
{
    struct node *ptr = head,*temp;
    for(int i =1; i<=pos-2;i++)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = ptr->link->link;

    free(temp);
    temp =NULL;
}
