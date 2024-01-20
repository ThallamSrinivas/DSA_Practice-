//Dynamic memory allocation using realloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n =2;
   //printf("Enter the number of integers");
   //scanf("%d",&n);
  int *ptr = (int*)malloc(n*sizeof(int));
  if(ptr == NULL)
    exit(1);
  for (int i=1;i<=n;i++)
  {
      printf("Enter the integer");
      scanf("%d",ptr+i-1);
  }

  ptr = (int*)realloc(ptr,4*sizeof(int));
  for (int i=2;i<4;i++)
  {
      printf("Enter new integers");
      scanf("%d",ptr+i);
  }

  for(int i =1; i<=4;i++)
  {
      printf("%d ",*(ptr+i-1));
  }
    return 0;
}
