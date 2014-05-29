#include<iostream>
#include<cstdio>
#include<deque>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int n,m,a,x,b,sum=0,ans=0,temp,fin=0;
    scanf("%lld",&n);
    m=47;
    deque<long long int>S;
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&x);
            if(sum+x>m&&S.size()!=0)
            {

                temp=sum+x;
                while(temp>m&&S.size()!=0)
                {
                    temp=temp-S.back();
                    S.pop_back();
                }
                S.push_front(x);
                sum=temp;
                if(temp==m)
                    fin++;
            }
            else
            {
                if(x==m)
                {
                while(S.front()==0&&S.size()!=0)
                {
                    fin++;S.pop_front();
                }
                }
                S.push_front(x);
                sum+=x;
                if(sum==m)
                    fin++;
            }
    }
    printf("%lld\n",fin);
    }

}

