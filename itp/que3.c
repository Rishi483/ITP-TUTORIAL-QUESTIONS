#include<stdio.h>
#include <string.h>

int main()
{
    int  A[] = {1, 2, 3, 4, 5, 6};
    int size = *(&A + 1) - A;
   printf("Size of array %d\n",size);
    return 0;
}