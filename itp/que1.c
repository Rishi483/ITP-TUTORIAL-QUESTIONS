#include<stdio.h>
int main(){
    //integer pointer
    int a=9;
    int*p;
    p=&a;
    printf("%d",*p);
    //float pointer
    float b=0.9;
    float*q;
    q=&b;
    printf("\n%f",*q);
    //double pointer
    double c=8.99;
    double* r;
    r=&c;
    printf("\n%f",*r);
    //char pointer
    char d='d';
    char* s;
    s=&d;
    printf("\n%c",*s);

    return 0;
}