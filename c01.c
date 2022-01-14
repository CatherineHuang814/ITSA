//矩陣數字顯示
#include <stdio.h>

int main()
{
    char num[4];
    scanf("%s", num);
    
    for(int i=0;i<3;i++)
    {
        switch(num[i])
        {
            case '1':printf("    * "); break;
            case '4':printf("*   * "); break;
            case '6':printf("*     "); break;
            default :printf("***** "); break;
        }
    }
    switch(num[3])
    {
        case '1':printf("    *"); break;
        case '4':printf("*   *"); break;
        case '6':printf("*    "); break;
        default :printf("*****"); break;
    }
    printf("\n");

    for(int i=0;i<3;i++)
    {
        switch(num[i])
        {
            case '1':printf("    * "); break;
            case '2':printf("    * "); break;
            case '3':printf("    * "); break;
            case '4':printf("*   * "); break;
            case '5':printf("*     "); break;
            case '6':printf("*     "); break;
            case '7':printf("    * "); break;
            default :printf("*   * "); break;
        }
     }
    switch(num[3])
    {
        case '1':printf("    *"); break;
        case '2':printf("    *"); break;
        case '3':printf("    *"); break;
        case '4':printf("*   *"); break;
        case '5':printf("*    "); break;
        case '6':printf("*    "); break;
        case '7':printf("    *"); break;
        default :printf("*   *"); break;
    }
    printf("\n");

    for(int i=0;i<3;i++)
    {
        switch(num[i])
        {
            case '1':printf("    * "); break;
            case '7':printf("    * "); break;
            case '0':printf("*   * "); break;
            default :printf("***** "); break;
        }
    }
    switch(num[3])
    {
        case '1':printf("    *"); break;
        case '7':printf("    *"); break;
        case '0':printf("*   *"); break;
        default :printf("*****"); break;
    }
    printf("\n");

    for(int i=0;i<3;i++)
    {
        switch(num[i])
        {
            case '1':printf("    * "); break;
            case '2':printf("*     "); break;
            case '6':printf("*   * "); break;
            case '8':printf("*   * "); break;
            case '0':printf("*   * "); break;
            default :printf("    * "); break;
        }
    }
    switch(num[3])
    {
        case '1':printf("    *"); break;
        case '2':printf("*    "); break;
        case '6':printf("*   *"); break;
        case '8':printf("*   *"); break;
        case '0':printf("*   *"); break;
        default :printf("    *"); break;
    }
    printf("\n");

    for(int i=0;i<3;i++)
    {
        switch(num[i])
        {
            case '1':printf("    * "); break;
            case '4':printf("    * "); break;
            case '7':printf("    * "); break;
            case '9':printf("    * "); break;
            default :printf("***** "); break;
        }
    }
    switch(num[3])
    {
        case '1':printf("    *"); break;
        case '4':printf("    *"); break;
        case '7':printf("    *"); break;
        case '9':printf("    *"); break;
        default :printf("*****"); break;
    }
    printf("\n");
    
    return 0;
}
