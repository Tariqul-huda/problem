#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,r;
    r = 1;
    cin>>t;
    while(t--)
    {
        int n=0;
        int m=0;
        int j=0;
        cin>>n;
        while(n--)
        {
        int x;
        cin>>x;
        m = m+((x/30)+1)*10;
        j = j +((x/60)+1)*15;

        }
        if(m<j)
        {
            printf("Case %d: Mile %d\n",r,m);
        }
        else if(j<m)
            printf("Case %d: Juice %d\n",r,j);
        else
            printf("Case %d: Mile Juice %d\n",r,m);
        r++;


    }
    return 0;
}
