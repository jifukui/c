#include <stdio.h>
int data1()
{
    int a,x;
    for(a=0,x=0;a<=1&&!x++;a++)
    {
        a++;
    }
    printf("the a is %d x is %d \n",a,x);
}
int data2()
{
    int a,x;
    for(a=0,x=0;a<=1&&!x++;)
    {
        a++;
    }
    printf("the a is %d x is %d \n",a,x);
}
int main()
{
    data1();
    datat2();
    return 0;
}