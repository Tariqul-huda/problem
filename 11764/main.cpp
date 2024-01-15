#include <bits/stdc++.h>

using namespace std;
struct score
{
    int high;
    int low;
};
struct score cal(vector<int>a)
{
    struct score s;
    s.high = s.low= 0;
    for(int i=1;i<=a.size()-1;i++)
    {
        if(a[i-1]<a[i])
            s.high++;
        else if(a[i-1]>a[i])
            s.low++;
    }
    return s;
};
int main()
{
   int t;
   cin>>t;
   int r =1;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>a;
       while(n--)
       {
           int x;
           cin>>x;
           a.push_back(x);
       }
       struct score s = cal(a);
       printf("Case %d: %d %d\n",r++,s.high,s.low);

   }
    return 0;
}
