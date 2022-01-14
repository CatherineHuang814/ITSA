//prime num
#include <stdio.h>  
  
int main()  
{  
    int num;  
    while(scanf("%d", &num)!=EOF)  
    {  
        int cnt=0;  
        if(num==2) cnt=0;  
        else if(num%2==0) cnt=1;  
        else  
        {  
            int div=3;  
            while(num>div)  
            {  
                if(num%div==0) cnt++;  
                div++;  
            }  
        }  
        if(cnt==0) printf("YES\n");  
        else printf("NO\n");  
    }  
    return 0;  
}  
