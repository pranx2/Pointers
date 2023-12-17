#include<stdio.h>
void dowork(int a ,int b, int *sum, int *prod, int *avg);
int main(int argc, char const *argv[])
{
    int a=3 , b=5 , sum , prod , avg;
    dowork(a,b,&sum,&prod,&avg);
    printf("sum is = %d & prod is = %d & avg is = %d",sum,prod,avg);
    return 0;
}
//Call by reference->
void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod= a * b;
    *avg=(a+b)/2;
}
