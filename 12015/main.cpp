#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   cin>>ws;
   int r =1;
   while(t--)
   {
       int minn = INT_MIN;
       vector<vector<string>>a(200);
       for(int i=1;i<=10;i++)
       {
       string s;
       int n;
       cin>>s>>n;
       a[n].push_back(s);
       minn = max(n,minn);

       }
       cout<<"Case #"<<r++<<":"<<endl;
       for(int i=0;i<a[minn].size();i++)
       {
           cout<<a[minn][i]<<endl;
       }

   }
    return 0;
}
