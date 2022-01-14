//polynomial
#include <stdio.h>
int main()
{
    int coef[3];
    scanf("%d%d%d", coef+2, coef+1, coef);
    int temp[100000], ans[100000], times, highest, i, j, k;
        scanf("%d", &times);
    temp[0]=1;
    highest=0;
    for(i=0; i<times; i++)
    {
        for(j=0; j<=highest+2; j++)
            ans[j]=0;   //one turn
        for(j=0; j<=highest; j++)   //temp
            for(k=0; k<3; k++)  //coef
                ans[j+k] += temp[j]*coef[k];    // [] = power
        for(j=0; j<=highest+2; j++)
            temp[j]=ans[j];
        highest+=2;
    }
    for(i=highest; i>=0; i--)
    {
        printf("%d", ans[i]);
        if(i)
            printf(" ");
    }
    printf("\n");

    return 0;
}
