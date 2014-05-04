#include <stdio.h>
#include <string.h>

int n,i,j,t,s;

int main()
{
    int k,cnt[100]= {0};
    char s[10000];
    scanf("%d%s",&k,s);
    for (i=0; s[i]; ++i)
	 ++cnt[s[i]-'a'];
    for (i=0; i<26; ++i)
        if (cnt[i]%k)
        {
            puts("-1");
            return 0;
        }
        else cnt[i]/=k;

    for (i=0; i<k; ++i)
    {
        for (j=0; j<26; ++j)
        {
            for (t=0; t<cnt[j]; ++t)
                printf("%c",j+'a');
        }
    }
    puts("");
    return 0;
}
