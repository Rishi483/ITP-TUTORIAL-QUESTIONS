#include<stdio.h>
int main(){
    //integer pointer
    int a=9;
    int*p;
    p=&a;
    printf("value of a :%d",*p);
    printf("\naddress of a :%p",&a);
    //float pointer
    float b=0.9;
    float*q;
    q=&b;
    printf("\nvalue of b :%f",*q);
    printf("\naddress of b :%p",&b);
    //double pointer
    double c=8.99;
    double* r;
    r=&c;
    printf("\nvalue of c :%f",*r);
    printf("\naddress of c :%p",&c);
    //char pointer
    char d='d';
    char* s;
    s=&d;
    printf("\nvalue of d :%c",*s);
    printf("\naddress of d :%p",&d);

    return 0;
}