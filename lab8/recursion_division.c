#include <stdio.h>
 
int division(int, int);
 
int main()
{
    int x, y, div;
 
    printf(" Enter Dividend : ");
    scanf("%d",&x);
    printf(" Enter Divisor : ");
    scanf("%d",&y);
    div = division(x, y);
    printf(" Division Of The Given Numbers is %d\n", div);
    return 0;
}
 
int division(int m, int n)
{
    if(n==0)
        return 0;
    else if(m-n==0)
        return 1;
    else if(m<n)
        return 0;
    else
    {
        return (1+division(m-n,n));
    }
}