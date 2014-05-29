#include<iostream>
#include<map>
#define ll long long int
using namespace std;
int main()
{

       int t;
       cin>>t;
       while(t--)
       {
             ll a,b;
             scanf("%lld%lld",&a,&b);
             map<ll,ll>p,q;
             for(int j=2;j*j<=a;++j)
             {
                   while(a%j==0)
                   {
                        //cout<<j<<"HI"<<endl;
                         a/= j;
                         p[j]++;
                   }
             }
             if(a>1)
                  p[a]++;
             for(int j=2;j*j<=b;++j)
             {
                   while(b%j==0)
                   {
                         b/= j;
                         q[j]++;
                   }
             }
             if(b>1)
                  q[b]++;

             map<ll,ll>p1;
             map<ll,ll>::iterator t;
             for(t=q.begin();t!=q.end();t++)
             {
                //cout<<t->first<<" "<<t->second<<endl;
                   if(t->second > p[t->first])
                   {
                            p1[t->first]=t->second;
                   }
             }
             for(t=p.begin();t!=p.end();t++)
             {
                    //cout<<t->first<<" "<<t->second<<endl;
                   if(t->second > q[t->first])
                   {
                            if(t->second >= p1[t->first])
                          {
                                 p1[t->first]=t->second;
                          }
                   }
             }
            ll ans=1;
            for(t=p1.begin();t!=p1.end();t++)
            {
                   for(int i=0;i<t->second;i++)
                   {
                            ans=ans*1LL*(t->first);
                   }
            }
            printf("%lld\n",ans);
        }
        return 0;
    }
