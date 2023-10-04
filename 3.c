#include <stdio.h>

int main()
{
    int x,y;
    printf("input coordinates");
    printf("\nx=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    if (x>=0)
    {
        if (y>=0)
        printf("1 chetvert");
        else printf("4 chetvert");
        return 0;
    }
    if (x<0)
    {
        if (y<0)
        printf("3 chetvert");
        else printf("2 chetvert");
        return 0;
    }
    return 0;
}