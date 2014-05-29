#include<iostream>
#include<deque>
using namespace std;
int main()
{
    long long int t,sum=0,temp=0,ans1=0,ans2=0,x,n,m;
    cin>>t;
    while(t--)
    {
        deque<long long int>S;
        ans1=0,ans2=-1,sum=0;
        scanf("%lld%lld",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&x);
            if((sum+x)>m&&S.size()!=0)
            {
                if(ans1<=S.size())
                {
                    if(ans1==S.size())
                    {
                    ans1=S.size();
                    if(ans2!=-1)
                        ans2=min(ans2,sum);
                    else ans2=sum;
                    }
                    else
                    {
                        ans1=S.size();
                        ans2=sum;
                    }
                }
                temp=sum+x;
                while(temp>m&&S.size()!=0)
                {
                    if(S.size()==0)
                    {
                        break;
                    }
                    temp=temp-S.back();
                    S.pop_back();
                }
                S.push_front(x);
                sum=temp;
                if(ans1<=S.size())
                {
                    if(ans1==S.size())
                    {
                    ans1=S.size();
                    if(ans2!=-1)
                        ans2=min(ans2,sum);
                    else ans2=sum;
                    }
                    else
                    {
                        ans1=S.size();
                        ans2=sum;
                    }
                }
            }
            else
            {
                S.push_front(x);
                sum=sum+x;
                if(ans1<=S.size())
                {
                    if(ans1==S.size())
                    {
                    ans1=S.size();
                    if(ans2!=-1)
                        ans2=min(ans2,sum);
                    else ans2=sum;
                    }
                    else
                    {
                        ans1=S.size();
                        ans2=sum;
                    }
                }
            }
        }
        if(ans1<S.size())
        {
            ans1=S.size();
            ans2=sum;
        }
        cout<<ans2<<" "<<ans1<<endl;
    }

}
