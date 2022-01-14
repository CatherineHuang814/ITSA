#include <stdio.h>
#include <ctype.h>

int main()
{
    int a, b;
    while(scanf("%d",&a)!=EOF)
    {
        int dcnt=8, ans[8]={0};
        if(a<0) a+=256;
        while(a!=0)
        {
            b=a%2;
            a=a/2;
            ans[--dcnt]=b;
        }
        if(dcnt!=0) for(int i=0; i<dcnt; i++) ans[i]=0;
        for(int i=0; i<8; i++) printf("%d", ans[i]);
        printf("\n");
    }
    return 0;
}
