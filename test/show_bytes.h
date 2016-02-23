#ifndef SHOW_BYTES_H
#define SHOW_BYTES_H

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%.2x",start[i]);  //start[i]  get the start pointer address offset i the values of the address
        printf("\n");
        //printf ??  %d ???????????   %f???????  %f ????????
    }
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x,sizeof(int));
}


void show_float(float x)
{
    show_bytes((byte_pointer) &x,sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x,sizeof(void *));
}


void inplace_swap(int *x,int *y)
{
    *y=*x^*y;
    *x=*x^*y;
    *y=*x^*y;
}

void test_show_bytes(int val)
{
    int ival=val;
    float fval=(float)ival;
    int *pval=&ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);



}










#endif // SHOW_BYTES_H
