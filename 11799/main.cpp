#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,r=1;
    cin>>t;
    while(t--)
    {
        int x = INT_MIN;
        int n;
        cin>>n;
    while(n--)
    {
            int a;
            scanf("%d",&a);
        if(a>x)
        {
            x = a;
        }

        }

    printf("Case %d: %d\n",r++,x);
    }

    return 0;
    }

