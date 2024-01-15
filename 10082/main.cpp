#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char c;
    string digit_row = "`1234567890-=";
    string first_row = "QWERTYUIOP[]\\";
    string second_row = "ASDFGHJKL;'";
    string third_row = "ZXCVBNM,./";


    while(scanf("%c",&c)==1)
    {
        if(c==32)
            cout<<c;
        else if(first_row.find(c)!=string::npos)
        {
            cout<<first_row[first_row.find(c)-1];
        }
        else if(second_row.find(c)!=string::npos)
        {
            cout<<second_row[second_row.find(c)-1];
        }
        else if(third_row.find(c)!=string::npos)
            cout<<third_row[third_row.find(c)-1];
        else if(digit_row.find(c)!=string::npos)
            cout<<digit_row[digit_row.find(c)-1];
        else
            cout<<c;
    }


    return 0;
}
