#include <stdio.h>
 
int product(int, int);
 
int main()
{
    int x, y, pro;
 
    printf(" Enter First Number : ");
    scanf("%d",&x);
    printf(" Enter Second Number : ");
    scanf("%d",&y);
    pro = product(x, y);
    printf("Product Of The Given Numbers is %d\n",  pro);
    return 0;
}
 
int product(int m, int n)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    return m + product(m, n - 1);
}