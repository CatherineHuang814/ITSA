#include<stdio.h>
#include<math.h>


int main()
{
    int s;
    scanf("%d",&s);

    for (int i=0;i<s;i++)
    {
        int n, m;
        double p;
        scanf("%d",&n);
        scanf("%lf",&p);
        scanf("%d",&m);
        if (p < 0.00001)
            printf("0.0000\n");
        else
        {
            double ans;
            ans = pow(1 - p, m - 1) * p;
            ans /= (1 - pow(1 - p, n));

            printf("%.4lf\n", ans);
        }
    }
    return 0;
}
