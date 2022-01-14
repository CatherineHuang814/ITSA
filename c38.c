#include<stdio.h>

int main()
{
    int e;
    scanf("%d", &e);
    double summer=0, other=0;
    while(e!=0)
    {
        if(e>700)
        {
            int p=e-700;
            summer+=5.63*p;
            other+=4.5*p;
            e-=p;
        }
        else if(e>500)
        {
            int p=e-500;
            summer+=4.97*p;
            other+=4.01*p;
            e-=p;
        }
        else if(e>330)
        {
            int p=e-330;
            summer+=4.39*p;
            other+=3.61*p;
            e-=p;
        }
        else if(e>120)
        {
            int p=e-120;
            summer+=3.02*p;
            other+=2.68*p;
            e-=p;
        }
        else
        {
            summer+=2.1*e, other+=2.1*e;
            e=0;
        }
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", summer, other);
    return 0;
}
