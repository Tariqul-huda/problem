#include <bits/stdc++.h>

using namespace std;
int digit(string s);
int main()
{
   string s;

   while(cin>>s && s!="0")
   {
       cout<<digit(s)<<endl;
   }
    return 0;
}
int sum_digit(string s)
{
    int result = 0;
    for(int i=0;i<s.size();i++)
    {
        result+=(s[i]-'0');
    }
    return result;
}
int add_digit(int c)
{
    int result = 0;
    while(c)
    {
        result+=(c%10);
        c/=10;
    }
    return result;
}
int digit(string s)
{
        int c = sum_digit(s);
        while(c>9)
        {
            c = add_digit(c);
        }
        return c;
}
