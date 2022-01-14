#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *getword(char *text,char *word)
{
    char *ptr=text;
    char *qtr=word;
    word[0]='\0';
    while(isspace(*ptr)) ptr++;
    while(!isspace(*ptr) && *ptr!='\0')
    {
        if(*ptr >= 'A' && *ptr <= 'Z') *ptr=*ptr+32; //轉小寫
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(word[0]=='\0') return NULL;
    return ptr;
}

int main()
{
    char input[1024];
    while(fgets(input, 1024, stdin))
    {
        char *ptr=input, get[1024], word[1024][1024];
        int wordcnt=0, i, j;
        while((ptr=getword(ptr,get))!=NULL)
        {
            strcpy(word[wordcnt], get); //存每個單字
            wordcnt++;
        }

        printf("%s", word[0]);
        for(i=1; i<wordcnt; i++)
        {
            int print=1;
            for(j=0; j<i; j++)
            {
                if(strcmp(word[i],word[j])==0) print=0; //重複不輸出
            }
            if(print==1) printf(" %s", word[i]);
        }
        printf("\n");
    }
    return 0;
}
