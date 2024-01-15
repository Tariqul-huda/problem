#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,r;
    //freopen("input.txt","r",stdin);
    cin>>t;
    r=1;
    while(t--)
    {
        long double sum=0;
        for(int i= 1;i<=12;i++)
        {
            long double data;
            cin>>data;
            sum+=data;
        }
        setlocale(LC_NUMERIC, "");
        long double result = sum/12.00;

//        float dec = result-(int)result;
//        dec*=100;
//        int decc;
//        if((dec-(int)dec)>=0.5)
//        {
//            decc = dec+1;
//        }
//        else
//        {
//            decc =dec-1;
//        }
//        dec = decc/100.00;
////        cout<<<<" "<<endl;
        if(result>=1000)
        {
            long double dec = (int)(result/1000);
            long double decc = result-(dec*1000);

        printf("%d $%.0Lf,%.2Lf\n",r++,dec,decc);

        }
        else
            printf("%d $%.2Lf\n",r++,result);


    }
    return 0;
}
