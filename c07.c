//複數運算
#include<stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    for(int i=0; i<input; i++)
    {
    	int a, a_i, b, b_i;
        char op;
        scanf(" %c %d %d %d %d", &op, &a, &a_i, &b, &b_i);

        switch(op) 
        {
            case '+':printf("%d %d\n", a+b, a_i+b_i);break;
            case '-':printf("%d %d\n", a-b, a_i-b_i);break;
            case '*':printf("%d %d\n", a*b-a_i*b_i, a_i*b+a*b_i);break;
            //(ac-bd)+(bc+ad)i
            case '/':printf("%d %d\n", (a*b+a_i*b_i)/(b*b+b_i*b_i), (a_i*b+a*b_i)/(b*b+b_i*b_i));break;
            //[(ac+bd)/(c^2+d^2)]+[(bc-ad)/(c^2+d^2)]i
        }
    }
    return 0;
} 
