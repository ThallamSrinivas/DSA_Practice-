// Print the array in the reverse order
#include<stdio.h>
int main()
{
    int array []={34,56,54,32,67,89,90,32,21};
    //int N= 9;
   int  N= sizeof (array) /sizeof(int);

    for (int i=0; i<N; i++)
    {
        printf("% d", array[N-1-i]);
    }

    return 0;
    }
