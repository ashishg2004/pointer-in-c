#include<stdio.h>
int main()
{
    int a = 5;
    int b =7;
    swap(&a,&b);

printf("the value of a is %d \n",a);

printf("the value of b is %d \n",b);
return 0;
}
void swap(int* x,int* y){
int temp;
temp=*x;//temp = 2
*x=*y;//a = 9
*y=temp;// *y=2 --> b = 2;
return;
}