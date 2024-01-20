//create a SLL to store a polynomial and print it
#include<stdio.h>
#include<stdlib.h>

struct node* createSLLP();
struct node* addnode_Empty(struct node *head,float coeff,int exponent);
struct node* addnode_End(struct node *curptr,float coeff,int exponent);
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

struct node* createSLLP(struct node *head, int n)
{
  float coeff;
  int exponent;
  printf("Enter the coefficient 1");
  scanf("%f",&coeff);
  printf("Enter the exponent 1");
  scanf("%d",&exponent);
  head = addnode_Empty(head,coeff,exponent);
  struct node *curptr = head;
  for (int i=1;i<n;i++)
  {
  printf("Enter the coefficient %d",i+1);
  scanf("%f",&coeff);
  printf("Enter the exponent %d",i+1);
  scanf("%d",&exponent);
  curptr = addnode_End(curptr,coeff,exponent);
  }
  return head;
};

void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr->link!=NULL)
    {
        printf("%.1fx^%d+",ptr->coeff,ptr->exponent);
        ptr = ptr->link;
    }
    printf("%.1fx^%d",ptr->coeff,ptr->exponent);
}

int main()
{
    struct node *head =NULL;
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    head = createSLLP(head,n);
    print(head);
    return 0;
}
