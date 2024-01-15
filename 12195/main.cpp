#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,long double>a;
    a['W'] = 1;
    a['H'] = 1/2.00;
    a['Q'] = 1/4.00;
    a['E'] = 1/8.00;
    a['S'] = 1/16.00;
    a['T'] = 1/32.00;
    a['X'] = 1/64.00;
    string s;
    while(cin>>s && s!="*")
    {
        long double sum=0;
        int result = 0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!='/')
                sum+=a[s[i]];
            else
            {
                if(sum==1)
                    result++;

                sum=0;
            }
        }
        cout<<result<<endl;
    }

        return 0;
}
