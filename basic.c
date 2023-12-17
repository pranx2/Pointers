#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age = 20;
        int *pnt= &age;
            int _age = *pnt;
            //Address printout;
                printf("%p\n",&age);
                printf("%u\n",&age);
                printf("%p\n",&pnt);
                printf("%u\n",pnt);
//value printout;
                printf("%d\n",age);
                printf("%d\n",*pnt);
                printf("%d\n",*(&age));
    return 0;
}
