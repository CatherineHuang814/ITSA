#include <stdio.h>

int main()
{
    char sp[8], p[8][8], rp[8];
    scanf("%s %s %s %s", sp, p[0], p[1], p[2]);
    int num, m=0, i, j, k;
    int sp_cnt=0, p_cnt[8]={0};
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%s", rp);
        int check=0, max_check=0;
        for(j=0; j<8; j++) if(sp[j]==rp[j]) check++;
        if(check==8)
        {
            m+=2000000;
            sp_cnt++;
        }
        else for(k=0; k<3; k++)
        {
            check=0;
            int j=7;
            while(j>=0)
            {
                if(p[k][j]==rp[j])
                {
                    check++;
                    j--;
                }
                else j=-1;
            }
            if(max_check<check) max_check=check;
        }
        switch(max_check)
        {
            case 3: m+=200; p_cnt[5]++; break;
            case 4: m+=1000; p_cnt[4]++; break;
            case 5: m+=4000; p_cnt[3]++; break;
            case 6: m+=10000; p_cnt[2]++; break;
            case 7: m+=40000; p_cnt[1]++; break;
            case 8: m+=200000; p_cnt[0]++; break;
        }
    }
    printf("%d ", sp_cnt);
    for(i=0; i<5; i++) printf("%d ", p_cnt[i]);
    printf("%d\n%d\n", p_cnt[5], m);
    return 0;
}
