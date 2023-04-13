#include <stdio.h>
 
void mul_table(int N, int i,int p)
{
    if (i > p)
        return;
    printf ("\n %d * %d = %d", N,i,N * i);
    return mul_table(N, i + 1,p);
}
 
int main()
{
    int N,p;
    printf("Enter The Number : ");
    scanf("%d", &N);
    printf(" Enter the Range : ");
    scanf("%d", &p);
    mul_table(N, 1, p);
    return 0;
}