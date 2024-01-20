//Dynamic memory allocation using malloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
   printf("Enter the number of integers");
   scanf("%d",&n);
  int *ptr = (int*)malloc(n*sizeof(int));
  for (int i=1;i<=n;i++)
  {
      printf("Enter the integer");
      scanf("%d",ptr+i-1);
  }
  for(int i =1; i<=n;i++)
  {
      printf("%d ",*(ptr+i-1));
  }
    return 0;
}
