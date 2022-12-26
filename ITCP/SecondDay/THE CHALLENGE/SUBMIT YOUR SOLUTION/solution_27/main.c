#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("give 2 numbers: ");
    scanf("%d%d",&x,&y);
    if(x+y<100)
        printf("True");
    else
        printf("False");

    return 0;
}
