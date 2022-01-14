#include <stdio.h>
#include <string.h>

int main()
{
    char input[16];
    while(scanf("%s", input)!=EOF)
    {
        int len=strlen(input), no=0;
        for(int i=0; i<len/2; i++)
        {
            if(input[i]!=input[len-1-i]) no++;
        }
        if(no==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
