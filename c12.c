//遞迴
#include <stdio.h>

int m();

int main()
{
    int input;
    scanf("%d", &input);
    printf("%d\n", m(input));
    return 0;
}

int m(int input)
{
    if(input==0||input==1) return input+1;
    else return m(input-1)+m(input/2);
}
