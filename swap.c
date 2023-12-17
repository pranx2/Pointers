#include<stdio.h>
void swap(int a,int b);
void _swap(int *a , int *b );

int main(int argc, char const *argv[])
{
        int x= 3,y = 5 ;
        swap(x,y);
        printf("a is = %d & b is = %d\n",x,y);
        _swap(&x,&y);
        printf("a is = %d & b is = %d\n",x,y);

    return 0;
}
//Call by  reference - >
void _swap (int *a , int *b){
                int t = *a;
                *a = *b ;
                * b = t ;
                printf("a is = %d & b is = %d\n",*a , *b);
}
//call by value->
void swap(int a , int b ){
    int c = a ;
    a = b ;
    b = c ;
            printf("a is = %d & b is = %d\n",a,b);    
}