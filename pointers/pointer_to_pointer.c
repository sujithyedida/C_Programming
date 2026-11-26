#include<stdio.h>

int main(){

    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;

    printf("The memory address of the pointer is %p with the value stored %d",pptr,**pptr);

    return 0;
}