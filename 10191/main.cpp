#include<bits/stdc++.h>
using namespace std;
struct tie{
    int h,m;
};
struct app{
    struct tie startt;
    struct tie endd;
};

int main()
{
    int t,r;
    r=1;
   freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    while(scanf("%d",&t)==1)
    {
        vector<struct tie>startt;
        vector<struct tie>endd;
        vector<struct app>ff;
        long long long_duration = INT_MIN;
        struct tie temp;

        for(int i=1;i<=t;i++)
        {
            char c[300];
            struct tie first;
            struct tie last;
            struct app a;
            scanf("%d:%d %d:%d %[^\n]s",&first.h,&first.m,&last.h,&last.m,c);
            startt.push_back(first);
            endd.push_back(last);
            a.startt = first;
            a.endd = last;
            ff.push_back(a);
        }
        for(int i= 1;i<ff.size();i++)
        {
            int fhour = ff[i-1].endd.h;
            int fmin = ff[i-1].endd.m;
            int lhour = ff[i].endd.h;
            int lmin = ff[i].endd.m;
            if(fhour>lhour ||(fhour==lhour && fmin>lmin))
            {
                swap(ff[i],ff[i-1]);
            }
        }
//        for(int i=1;i<startt.size();i++)
//        {
//            if(endd[i-1].h!= startt[i].h || endd[i-1].m !=startt[i].h)
//            {
//                long long tempp = (startt[i].h*60+startt[i].m)-(endd[i-1].h*60+endd[i-1].m);
//                if(tempp>long_duration)
//                {
//                    long_duration = tempp;
//                    temp = endd[i-1];
//
//                }
//
//
//            }
//        }

        for(int i=1;i<ff.size();i++)
        {
            if(ff[i-1].endd.h!= ff[i].startt.h || ff[i-1].endd.m !=ff[i].startt.m)
            {
                long long tempp = (ff[i].startt.h*60+ff[i].startt.m)-(ff[i-1].endd.h*60+ff[i-1].endd.m);
                if(tempp>long_duration)
                {
                    long_duration = tempp;
                    temp = ff[i-1].endd;

                }


            }
        }
                long long tempp = 18*60-(ff[ff.size()-1].endd.h*60+ff[ff.size()-1].endd.m);
        if(tempp>long_duration)
        {
            long_duration = tempp;
            temp = ff[ff.size()-1].endd;
        }
        tempp = (ff[0].startt.h*60+ff[0].startt.m)-10*60;
        if(tempp>long_duration)
        {
            long_duration = tempp;
            temp.h = 10;
            temp.m = 0;
        }
        if(long_duration/60)
        {
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n",r++,temp.h,temp.m,long_duration/60,long_duration%60);
        }
        else
        {
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n",r++,temp.h,temp.m,long_duration);
        }

//        long long tempp = 18*60-(endd[endd.size()-1].h*60+endd[endd.size()-1].m);
//        if(tempp>long_duration)
//        {
//            long_duration = tempp;
//            temp = endd[endd.size()-1];
//        }
//        tempp = (startt[0].h*60+startt[0].m)-10*60;
//        if(tempp>long_duration)
//        {
//            long_duration = tempp;
//            temp.h = 10;
//            temp.m = 0;
//        }
//        if(long_duration/60)
//        {
//            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n",r++,temp.h,temp.m,long_duration/60,long_duration%60);
//        }
//        else
//        {
//            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n",r++,temp.h,temp.m,long_duration);
//        }

    }


}
