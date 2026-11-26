//Practice problem 1 : Print the value of 'i' from its pointer to pointer.

#include<stdio.h>

int main(){

    int i=5;
    int *ptr=&i; //pointer1 storing the address of i which is a number 5
    int **pptr=&ptr; //pointer2 storing the address of pointer1 made

    printf("The number/value of i is %d",**pptr);

    return 0;
}