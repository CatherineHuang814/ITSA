#include<stdio.h>  
  
int main()  
{  
    int mm, dd;  
    while(scanf("%d %d", &mm, &dd)!=EOF)  
    {  
        if(mm==1)  
        {  
            if(dd<=20) printf("Capricorn\n");  
            else printf("Aquarius\n");  
        }  
        else if(mm==2)  
        {  
            if(dd<=18) printf("Aquarius\n");  
            else printf("Pisces\n");  
        }  
        else if(mm==3)  
        {  
            if(dd<=20) printf("Pisces\n");  
            else printf("Aries\n");  
        }  
        else if(mm==4)  
        {  
            if(dd<=20) printf("Aries\n");  
            else printf("Taurus\n");  
        }  
        else if(mm==5)  
        {  
            if(dd<=21) printf("Taurus\n");  
            else printf("Gemini\n");  
        }  
        else if(mm==6)  
        {  
            if(dd<=21) printf("Gemini\n");  
            else printf("Cancer\n");  
        }  
        else if(mm==7)  
        {  
            if(dd<=22) printf("Cancer\n");  
            else printf("Leo\n");  
        }  
        else if(mm==8)  
        {  
            if(dd<=23) printf("Leo\n");  
            else printf("Virgo\n");  
        }  
        else if(mm==9)  
        {  
            if(dd<=23) printf("Virgo\n");  
            else printf("Libra\n");  
        }  
        else if(mm==10)  
        {  
            if(dd<=23) printf("Libra\n");  
            else printf("Scorpio\n");  
        }  
        else if(mm==11)  
        {  
            if(dd<=22) printf("Scorpio\n");  
            else printf("Sagittarius\n");  
        }  
        else if(mm==12)  
        {  
            if(dd<=21) printf("Sagittarius\n");  
            else printf("Capricorn\n");  
        }  
    }  
    return 0;  
}  
