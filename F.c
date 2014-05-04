#include<bits/stdc++.h>

using namespace std;

#define sc scanf
#define pf printf
#define pb push_back
#define Abs(n) (n<0?-n:n)
#define Mem(a,b) memset(a,b,sizeof(a))
#define Memcpy(a,b) memcopy(a,b,sizeof(a))
#define eps 1e-9
#define Pi 2*acos(0.0)
#define INF 0x7f7f7f7f
#define sq(x) x*x

long n;
char grid[301][301];

bool call()
{
     long sq = n*2 -1;
     long other = n*n - sq;

     long counT=0;
     for(long i=0; i<n; i++)
     {
         long y = n-1-i;
         if(grid[i][i] != grid[0][0] || grid[i][i] != grid[i][y])
          return 0;
     }

     for(long i=0; i<n; i++)
     {
          for(long j=0; j<n; j++)
          {
               if(i==j || (j==(n-1-i)))
                         continue;

               if(grid[i][j] != grid[0][1] || grid[i][j] == grid[0][0])
                    return 0;
          }
     }
     return 1;
}

int main()
{

    while(cin>>n)
    {
        cin.ignore();
        for(long i=0; i<n; i++)
            gets(grid[i]);

        if(call())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
