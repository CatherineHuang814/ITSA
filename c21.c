#include<stdio.h>  
  
int main()  
{  
    float num, max, min;  
  
    scanf("%f", &num);  
    max=num;  
    min=num;  
  
    for (int i=1; i<10; i++)  
    {  
        scanf("%f", &num);  
        if(max<num) max=num;  
        if(min>num) min=num;  
    }  
  
    printf("maximum:%.2f\n", max);  
    printf("minimum:%.2f\n", min);  
    return 0;  
}  
