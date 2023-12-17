#include<stdio.h>
void address (int n );

int main(int argc, char const *argv[])
{
        int n ;
        address(n);
                printf("address of n is  %u\n", &n);
        return 0;
}
void address(int n ){
        printf("address of n is  %u\n", &n);
}