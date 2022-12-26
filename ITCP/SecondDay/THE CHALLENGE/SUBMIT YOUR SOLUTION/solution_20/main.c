#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,prime;
    printf("give an integer: ");
    scanf("%d",&x);

    prime=1;

    if(x<=1){
        prime=0;
    }else{
        for(int i=x-1;i>1;i--){
            if(x%i==0){
                prime=0;
            }
        }
    }

    if(prime==0)
        printf("%d is not prime",x);
    else
        printf("%d is prime",x);

    return 0;
}
