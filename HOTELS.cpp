#include<iostream>
#include<deque>
using namespace std;
int main()
{
    long long int n,m,a,x,b,sum=0,ans=0,temp;
    cin>>n>>m;
    deque<long long int>S;
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&x);
            if((sum+x)>m)
            {
                temp=sum+x;
                while(temp>m)
                {
                        if(S.size()==0)
                            break;
                        temp=temp-S.back();
                        S.pop_back();
                }
                if(temp<=m)
                {
                    S.push_front(x);
                    ans=max(ans,temp);
                    sum=temp;
                    if(temp==m)
                        break;
                }
                else
                {
                    sum=0;
                }
            }
            else if(sum+x==m)
            {
                ans=m;
                break;
            }
            else
            {
                S.push_front(x);
                sum+=x;
                ans=max(ans,sum);
            }

    }
    printf("%lld",ans);

}
