#include<stdio.h>
int main()
{
    int intType; 
    float floatType;
    char c;
    double d;
    long int in;
    unsigned int ui;
    short int si;
    long double ld;

    printf("size of int data type %d\n", sizeof(intType));
    printf("size of float data type %d\n", sizeof(floatType));
    printf("size of char data type %d\n",sizeof(c));
    printf("size of double data type %d\n",sizeof(d));
    printf("size of long int data type %d\n",sizeof(in));
    printf("size of unsigne int data type %d\n",sizeof(ui));
    printf("size of short int data type %d\n",sizeof(si));
    printf("size of long double data type %d\n",sizeof(ld));
}
