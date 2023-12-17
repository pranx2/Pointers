#include<stdio.h>

void square(int n);
void _square (int *n);

int main(int argc, char const *argv[])
{
    int number = 4 ;
    square(number);
    printf("the number is %d\n",number);

    _square (&number);
    printf("The number is : %d\n",number);
    
    return 0;
}

void square (int n){
    n = n*n ;
    printf("the square is : %d\n",n );
}
void _square(int *n){
    *n = (*n) * (*n);
    printf("the square is : %d\n", *n);
}