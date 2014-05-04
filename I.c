#include <stdio.h>
#include <math.h>


int main()
{
    int n = 0,i,j,k,d;
    scanf("%d",&n);
    int res = 0;
    for(i = 1; i < n; ++i)
    {
        for(j = i + 1; j < n; ++j)
        {
             k = (i*i) + (j*j);
             d = sqrt(k);
            if(d * d == k && d <= n)
			res++;
        }
    }
    printf("%d\n",res);
    return 0;
}
