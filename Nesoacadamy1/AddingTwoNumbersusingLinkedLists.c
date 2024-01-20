//Adding Two Numbers using Linked Lists - Part 1 (3 parts)
// add digits of numbers to List nodes,save them in reverse order, add them.
#include<stdio.h>
#include<stdlib.h>
struct node* create_list();
struct node* reverselist();
struct node* add_nodesLL();
void print();
struct node{
int digit;
struct node *link;
};


struct node* insert_node(struct node *head,int rem)
{
//    if(head == NULL)
//    {
//      struct node *temp = (struct node*)malloc(sizeof(struct node));
//        temp->digit = rem;
//        temp->link = NULL;
//        head = temp;
//    }
//    else{
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->digit = rem;
        temp->link = NULL;

        temp->link = head;
        head = temp;
//    }

return head;
}
struct node* create_list(struct node *head,int n)
{
    int n1 =n;
     int rem;
    while(n1!=0)
    {
        rem = n1%10;
        head = insert_node(head,rem);
        n1=n1/10;
    }
    return head;
};
struct node* reverselist(struct node *head1)
{
    struct node *head = head1;
    struct node *next = NULL;
    struct node *prev = NULL;

    while(head!=NULL)
    {
    next = head->link;
    head->link = prev;
    prev = head;
    head =next;
    }
    return prev;
};

struct node* add_nodesLL(struct node *head1,struct node *head2)
{
    int sum =0,carry =0;
    struct node *ptr1 = head1, *ptr2 = head2,*head3 =NULL;

    while(ptr1!=NULL && ptr2!=NULL)
    {
    sum = sum + carry+ ptr1->digit+ptr2->digit;
    carry = sum/10;
    sum = sum%10;
    head3 = insert_node(head3,sum);
    sum =0;
    ptr1 = ptr1->link;
    ptr2 = ptr2->link;

    }
    while(ptr1!=NULL)
    {
        sum = sum + carry+ ptr1->digit;
    carry = sum/10;
    sum = sum%10;
    head3 = insert_node(head3,sum);
    sum =0;
    ptr1 = ptr1->link;
    }
    while(ptr2!=NULL)
    {
        sum = sum + carry+ ptr2->digit;
    carry = sum/10;
    sum = sum%10;
    head3 = insert_node(head3,sum);
    sum =0;
    ptr2 = ptr2->link;
    }
    head3 = insert_node(head3,carry);
return head3;
}


void print(struct node *head)
{

    struct node *ptr=head;
    while(ptr->link!=NULL)
    {
        printf("%d->",ptr->digit);
        ptr = ptr->link;
    }
     printf("%d",ptr->digit);
     printf("\n");
}

int main()
{
    struct node *head1=NULL;
    struct node *head2=NULL;

    int n1,n2;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
   head1 = create_list(head1,n1);
   print(head1);
   head1 = reverselist(head1);
   print(head1);

   head2 = create_list(head2,n2);
   print(head2);
   head2 = reverselist(head2);
   print(head2);

   struct node *head3 = NULL;
   head3 = add_nodesLL(head1,head2);
   print(head3);
    return 0;
}
