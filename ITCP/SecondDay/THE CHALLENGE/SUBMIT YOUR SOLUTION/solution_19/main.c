#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,perf,S;
    printf("give an integer: ");
    scanf("%d",&x);

    perf = 0;
    if(x==1){
        perf=1;
    }else{
        if(x>1){
            S=0;
            for(int i=x-1;i>0;i--){
                if(x%i==0){
                    S+=i;
                }
            }
            if(S==x){
                perf=1;
            }
        }
    }

    if(perf==0)
        printf("%d is not perfect",x);
    else
        printf("%d is perfect",x);

    return 0;
}
