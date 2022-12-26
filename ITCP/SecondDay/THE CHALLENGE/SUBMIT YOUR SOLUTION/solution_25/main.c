#include <stdio.h>
#include <stdlib.h>

int main()
{
    long x,x1,x2;
    x1=1;
    x2=1;
    printf("%d\n",x1);
    printf("%d\n",x2);
    for(int i=3;i<=100;i++){
        printf("%d\n",x1+x2);
        x=x1+x2;
        x2=x1;
        x1=x;
    }
    return 0;
}
