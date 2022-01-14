//英里轉公里
#include <stdio.h>  
  
int main ()  
{  
    int mile;  
    double km;  
    while(scanf("%d", &mile)!=EOF)  
    {  
        km=(double)mile*1.6;  
        printf("%.1f\n", km);  
    }  
      
    return 0;  
}  
