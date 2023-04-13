#include <stdio.h>   //optimise array i/p and max min a1 a2
int main(void)
{
    int length1, length2, carry_add=0,carry_diff=0 ,min, max;

    //Number of input
    printf(" Enter Number of digits in num1 and num2 : ");
    scanf("%d %d", &length1, &length2);
    int a1[length1], a2[length2];

    //Input in array
    printf("\n Enter Elements in num1 : \n");    
    for(int i=length1-1; i>=0; i--)
        scanf("%d", &a1[i]);
    printf("\n Enter Elements in num2 : \n"); 
    for(int i=length2-1; i>=0; i--)
        scanf("%d", &a2[i]);  

    //Find min and max no of elements  
    min=(length1>length2)?length2:length1;
    max=(length1>length2)?length1:length2;
    int sum[max];
    int diff[max];

    //Find sum and difference
    for(int i=0; i<min; i++)         //considering a1>a2
    {
        //Sum
        int a, b;
        a=a1[i];
        b=a2[i];
        sum[i]=(a+b+carry_add)%10;
        carry_add=(a+b+carry_add)/10;

        //Difference
        if(a<(b+carry_diff))
        {
            a+=10;
            diff[i]=a-(b+carry_diff);
            carry_diff=1;
        }
        else 
        {
            diff[i]=a-(b+carry_diff);
            carry_diff=0;
        }               
    }

    //Find sum & diff of rest elements
    for(int i=min; i<max; i++)
    {
        sum[i]=(a1[i]+carry_add)%10;
        carry_add=(a1[i]+carry_add)/10;
        diff[i]=a1[i]-carry_diff;
        carry_diff=0;
    }

    //Print array sum & diff
    printf(" ADDED RESULT : ");
    for(int i=max-1; i>=0; i--)
        printf("%d", sum[i]);
    printf("\n SUBTRACTED RESULT : ");
    for(int i=max-1; i>=0; i--)
        printf("%d", diff[i]);
}