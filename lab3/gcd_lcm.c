#include <stdio.h>
// function to find the gcd
int gcd(int x, int y)
{
    // the loop will execute till two numbers are equal while(x!=y)
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    // returning the gcd
    return x;
}
// function to find the LCM
void lcm(int n, int a[100])
{
    int l = a[0], i;
    // finding the lcm for (i=1;i<n;i++)
    for (i = 1; i < n; i++)
        l = (((a[i] * l)) / (gcd(a[i], l)));
    printf("\n The LCM is  %d", l);
}
// main function
int main()
{
    int n, i, g;
    // taking the inputs
    printf("\t Enter the number of Elements : ");
    scanf("%d", &n);
    int a[n];
    if (n < 2)
    {
        printf(" Sorry!!! Please Enter 2 or more numbers...");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf(" Enter a[%d] Element : ",i);
            scanf("%d", &a[i]);
        }
        // calling the function
        lcm(n, a);
        g = a[0];
        for (i = 0; i < n; i++)
            g = gcd(g, a[i]);
        printf("\n The GCD is  %d", g);
    }
}