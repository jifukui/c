#include <stdio.h>
int main()
{
    int b=3;
    int arry[]={6,7,8,9,10};
    int *pre=arry;
    *(pre++)+=123;
    printf("%d,%d\n",*pre,*(++pre));
    int i;
    for( i=0;i<5;i++)
    {
        printf("The %d is %d\n",i,arry[i]);
    }
    pre=arry;
    printf("%d \n",*(pre++));
    return 0;
}