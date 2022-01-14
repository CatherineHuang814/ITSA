#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, num;
    char input[128];
    fgets(input, 128, stdin);
    scanf("%d", &num);
    int len=strlen(input)-1;
    for(i=0; i<len; i++)
    {
        if(isupper(input[i]))
        {
            input[i]=(char)(((int)(input[i]-'A')+num)%26+'A');
            /*
             e.g. A:65 R:82 num:50
                  82-65+50=67 67%26=15 15+65=80
            */
        }
        if(islower(input[i]))
        {
            input[i]=(char)(((int)(input[i]-'a')+num)%26+'a');
        }
        if(isdigit(input[i]))
        {
            input[i]=(char)(((int)(input[i]-'0')+num)%10+'0');
        }
    }
    printf("%s", input);
    return 0;
}
