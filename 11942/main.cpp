#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
        cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        vector<int>a,b,c;
        int n;
        for(int i=1;i<=10;i++)
        {
            cin>>n;
            a.push_back(n);
        }
        b =  a;
        sort(b.begin(),b.end());
        c = b;
        reverse(c.begin(),c.end());
        if(a == b || a == c)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;

    }
    return 0;
}
