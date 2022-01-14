#include<stdio.h>  
#include<ctype.h>  
  
int main()  
{  
    int sentence;  
    int wc=0, word=0;  
    int lower[26]={0}, upper[26]={0};  
    while((sentence=getchar())!=EOF)  
    {  
        if(sentence==' ' || isspace(sentence)) word=0;  
        if(sentence>='a' && sentence<='z') lower[sentence-'a']++;  
        else if(sentence>='A' && sentence<='Z') upper[sentence-'A']++;  
        if(!isspace(sentence))  
        {  
            if(word==0) wc++;  
            word++;  
        }  
    }  
    printf("%d\n", wc);  
    for(int a=0; a<26; a++)  
    {  
        int num=upper[a]+lower[a];  
        if(num!=0) printf("%c : %d\n",'a'+a, num);  
    }  
    return 0;  
}  
