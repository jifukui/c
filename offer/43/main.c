#include <stdio.h>
int main()
{
    int x=2,y,z;
    x *=(y=z=5);
    printf("the x is %d\n",x);
    return 0;
}