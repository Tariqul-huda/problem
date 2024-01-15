#include<bits/stdc++.h>
using namespace std;
int to_digit(char c)
{
    return c-'0';
}
int main()
{
    int t,r;
    //freopen("input.txt","r",stdin);
    cin>>t;
    r=1;
    while(t--)
    {
        cin>>ws;
        string s;
        getline(cin,s);

        if(s.size()==3)
        {
            int num = to_digit(s[0]);
            long double result = 0.5 * num;
            cout<<"Case "<<r++<<": "<<result<<endl;
        }
        else if(s.size()==4)
        {
            string temp = s.substr(0,2);
            int num = stoi(temp);
            long double result = 0.5 * num;
            cout<<"Case "<<r++<<": "<<result<<endl;
        }
        else if(s.size()==7)
        {
            int num1 = to_digit(s[0]);
            int num2 = to_digit(s[4]);
            long double result = num1*0.5;
            result+=(num2*0.05);
            cout<<"Case "<<r++<<": "<<result<<endl;
        }
        else
        {
            int num1 = to_digit(s[0]);
            string temp = s.substr(4,2);
            int num2 = stoi(temp);
            long double result = num1*0.5;
            result+=(num2*0.05);
            cout<<"Case "<<r++<<": "<<result<<endl;

        }

    }
    return 0;
}
