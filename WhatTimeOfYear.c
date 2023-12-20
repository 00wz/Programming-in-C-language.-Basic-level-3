#include <stdio.h>

int main(void)
{
    int monthNumber;
    scanf("%d",&monthNumber);
    if(monthNumber==12||monthNumber==1||monthNumber==2)
    {
        printf("%s\n","winter");
        return 0;
    }
    if(monthNumber>=3&&monthNumber<=5)
    {
        printf("%s\n","spring");
        return 0;
    }
    if(monthNumber>=6&&monthNumber<=8)
    {
        printf("%s\n","summer");
        return 0;
    }
    if(monthNumber>=9&&monthNumber<=11)
    {
        printf("%s\n","autumn");
        return 0;
    }
    printf("%s\n","incorrect data");
}