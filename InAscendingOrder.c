#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    _Bool answer = a<b && b<c;
    printf("%s\n",answer?"YES":"NO");
    return 0;
}