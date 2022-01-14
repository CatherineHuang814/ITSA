//standard height
#include<stdio.h>  
  
int main()  
{  
    float height, ans;  
    int gender;  
    while(scanf("%f %d", &height, &gender)!=EOF)  
    {  
        if(gender==1) ans=(height-80)*0.7;  
        else ans=(height-70)*0.6;  
        printf("%.1f\n", ans);  
    }  
    return 0;  
}  
