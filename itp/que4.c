#include<stdio.h>
#include <string.h>

int main()
{   
    int i=0;
    char  A[] = {'a','f','c','d','e','r','h'};
    char* p;
    p=A;
    while (*p != '\0') {
    i++;
    p++;
  }
    printf("Size of the character array is %d\n",i);
    return 0;
}