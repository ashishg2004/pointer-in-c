#include<stdio.h>
int main()
{
    int a = 5;
    int* x =&a;
    printf("%p \n",*x); //prints the address of variable 'a' i.e., &a 
    printf("%p \n",&a);//%p is used to print the address of variable
}