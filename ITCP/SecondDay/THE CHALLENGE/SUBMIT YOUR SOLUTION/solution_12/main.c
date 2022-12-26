#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S[50];
    printf("give the string: ");
    gets(S);
    strrev(S);
    printf("this is its reverse: %s",S);
    return 0;
}
