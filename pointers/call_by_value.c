//call by value

#include<stdio.h>

void square(int n){
    n=n*n;
    printf("Sqaure : %d\n",n);

}

int main(){
    //call by value by passing the argument to the parameter 
    square(4);

    return 0;
}