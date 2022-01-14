int main ()  
{  
    int h1, m1, h2, m2;  
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);  
    int arrive=h1*60+m1, leave=h2*60+m2;  
    int time=leave-arrive, price;  
    time/=30;  
    price=time*30;  
    if(time>4)  
    {  
        time-=4;  
        price+=time*10;  
    }  
    if(time>4)  
    {  
        time-=4;  
        price+=time*20;  
    }  
    printf("%d\n", price);  
    return 0;  
}  
