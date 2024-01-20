//create a SLL to store a polynomial and print it// addition of two polynomials
#include<stdio.h>
#include<stdlib.h>

struct node* createSLLP();
struct node* insert(struct node *head,float coeff,int exponent);
struct node* Add_poly();
void print();

struct node{
float coeff;
int exponent;
struct node *link;
};

struct node* addnode_Empty(struct node *head,float coeff,int exponent)
{
       struct node *temp =(struct node*)malloc(sizeof(struct node));
       temp->coeff =coeff;
       temp->exponent = exponent;
       temp->link = NULL;

       head = temp;
       return head;
};

struct node* addnode_End(struct node *curptr,float coeff,int exponent)
{
       struct node *temp = (struct node*)malloc(sizeof(struct node));
       temp->coeff =coeff;
       temp->exponent = exponent;
       temp->link = NULL;

       curptr->link = temp;
       curptr = temp;
       return curptr;
};

struct node* insert(struct node *head,float coeff,int exponent)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
       temp->coeff =coeff;
       temp->exponent = exponent;
       temp->link = NULL;

  if(head==NULL || head->exponent<exponent)
  {
      temp->link = head;
      head = temp;
  }
  else{
    struct node *ptr = head;
    while(ptr->link!=NULL && ptr->exponent>exponent)
    {
        ptr =ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
  }
  return head;
}

struct node* createSLLP(struct node *head, int n)
{
  float coeff;
  int exponent;

  for (int i=0;i<n;i++)
  {
  printf("Enter the coefficient %d:",i+1);
  scanf("%f",&coeff);
  printf("Enter the exponent %d:",i+1);
  scanf("%d",&exponent);
  head = insert(head,coeff,exponent);
  }


  return head;
};

struct node* Add_poly(struct node *head1,struct node *head2, int n1, int n2)
{
    struct node *head3= NULL;
    struct node *ptr1 = head1, *ptr2 = head2;
    while(ptr1!=NULL && ptr2!= NULL)
    {
        if(ptr1->exponent == ptr2->exponent)
        {
          head3 =  insert(head3,ptr1->coeff+ptr2->coeff,ptr1->exponent);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        else if(ptr1->exponent > ptr2->exponent)
        {
          head3=  insert(head3,ptr1->coeff,ptr1->exponent);
            ptr1 = ptr1->link;
        }
        else
        {
          head3=  insert(head3,ptr2->coeff,ptr2->exponent);
            ptr2 = ptr2->link;
        }
    }
    while(ptr1!=NULL)
    {
       head3 =  insert(head3,ptr1->coeff,ptr1->exponent);
            ptr1 = ptr1->link;
    }
    while(ptr2!=NULL)
    {
      head3 =  insert(head3,ptr2->coeff,ptr2->exponent);
            ptr2 = ptr2->link;
    }

    return head3;
};

void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr->link!=NULL)
    {
        printf("%.1fx^%d + ",ptr->coeff,ptr->exponent);
        ptr = ptr->link;
    }
    printf("%.1fx^%d \n",ptr->coeff,ptr->exponent);
}

int main()
{
    struct node *head1 =NULL, *head2 = NULL;
    int n1,n2;
    printf("Enter the number of terms for first poly:");
    scanf("%d",&n1);
    head1 = createSLLP(head1,n1);
    print(head1);

    printf("Enter the number of terms for second poly:");
    scanf("%d",&n2);
    head2 = createSLLP(head2,n2);
    print(head2);

    struct node *head3 = Add_poly(head1,head2,n1,n2);
    print(head3);

    return 0;
}
