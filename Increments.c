#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int *ptr;
        ptr = &x;
            *ptr = 0 ; // X= 0;
        printf("x is = %d\n",x); //output will be X= 0;
        printf("ptr is = %d\n",*ptr);//output will be ptr = 0;
        //Now adding 5;
        *ptr += 5;//*ptr=*ptr + 5 ,, that means x=x + 5;
        printf("X value is %d\n", x);//X= 5;
        printf("ptr value is %d",*ptr);//ptr =5;
//increments;
                (*ptr)++;
                printf("X value is %d\n",x);//X=6;
                printf("ptr value is %d\n",*ptr);//ptr=6; 

    return 0;
}
