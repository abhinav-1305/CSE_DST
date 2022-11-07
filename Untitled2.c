#include<stdio.h>
#include<conio.h>
void main(_)
{
    int a=10,b=20,res1,res2,res3,res4;
    calc(a,b,&res1,&res2,&res3,&res4);
    printf("%d %d %d %d",res1,res2,res3,res4);
}
void calc(int a,int b,int *res1,int *res2,int *res3,int *res4)
{
    *res1=a+b;
    *res2=a-b;
    *res3=a*b;
    *res4=a/b;
}
