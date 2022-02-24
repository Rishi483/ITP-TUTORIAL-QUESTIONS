#include<stdio.h>

int main() {
  char A[20], *pt;
  int i = 0;
  printf(" Program to Find Length of String \n");
  printf("Enter Any string [Max 20 chars] : ");
  gets(A);
  pt = A;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}