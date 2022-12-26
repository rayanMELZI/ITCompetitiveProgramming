#include <stdio.h>
#include <stdlib.h>

int addition(int x,int y){
    return (x+y);
}

int main()
{
    int x,y;
    printf("give 2 numbers: ");
    scanf("%d%d",&x,&y);
    printf("x + y = %d",addition(x,y));
    return 0;
}
