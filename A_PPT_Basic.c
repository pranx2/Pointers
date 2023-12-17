#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 5 ;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n",**pptr);
    return 0;
}
