#include <stdio.h>  
  
int main ()  
{  
    int month;  
    while(scanf("%d", &month)!=EOF)  
    {  
        if(month<3) printf("Winter\n");  
        else if(month<6) printf("Spring\n");  
        else if(month<9) printf("Summer\n");  
        else if(month<12) printf("Autumn\n");  
        else printf("Winter\n");  
    }  
    return 0;  
}  
