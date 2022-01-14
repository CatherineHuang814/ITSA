#include<stdio.h>

int main()
{
    int x=0,y=0;
    while(scanf("%d %d", &x, &y)!=EOF) 
    {
        if(x*x+y*y<=10000) printf("inside\n");
        else printf("outside\n");
    }
    return 0;
}
