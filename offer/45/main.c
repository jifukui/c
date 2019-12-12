#include <stdio.h>
int main()
{
    int b=3;
    int arry[]={6,7,8,9,10};
    int *pre=arry;
    *(pre++)+=123;
    printf("%d,%d\n",*pre,*(++pre));
    return 0;
}