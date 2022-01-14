//grade pass or not
#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);//how many
    for(i=0; i<n; i++)
    {
        int a[4], j, pass=0, sum=0, m=0;
        for(j=0; j<3; j++)
        {
            scanf(" %d", &a[i]);
            if(a[i]>=60) pass++;
            if(a[i]>=80) m++;
            sum+=a[i];
        }
        if(pass==3) printf("P\n");
        else if(pass==2)
        {
            if(sum>=220) printf("P\n");
            else printf("M\n");
        }
        else if(pass==1)
        {
            if(m==1) printf("M\n");
            else printf("F\n");
        }
        else printf("F\n");
    }
    return 0;
}
