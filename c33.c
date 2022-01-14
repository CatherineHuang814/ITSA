//avg
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char input[1024];
    while(fgets(input, 1024, stdin))
    {
        char *num=strtok(input, " \n"); //切字串
        int total=0, cnt=0;
        while(num)
        {
            cnt++;
            float t=atof(num);
            total+=t;
            num=strtok(NULL, " \n");
        }
        printf("Size: %d\n", cnt);
        printf("Average: %.3f\n", (float)total/cnt);
    }
    return 0;
}
