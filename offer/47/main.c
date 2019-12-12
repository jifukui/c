#include<stdio.h>
int main()
{
    float a=1.0;
    printf("%x\n",a);
    printf("%x\n",&a);
    printf("%d\n",(int)a);
    printf("%x\n",(int &)a);
    printf("%x\n",(int *)a);
    printf("%d",((int)a)==(int &)a);
    return 0;
}