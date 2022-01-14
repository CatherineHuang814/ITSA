#include <stdio.h>  
  
int main()  
{  
    int num;  
    while(scanf("%d", &num)!=EOF)  
    {  
        int ans=0;  
        for(int i=1; i<=num; i++) if(i%3==0) ans+=i;  
        printf("%d\n", ans);  
    }  
    return 0;  
}  
