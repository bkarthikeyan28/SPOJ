#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    long long int t,A[100006];
    int count=1;
    while(cin>>t)
    {
        stack<long long int>S;
        for(int i=0;i<t;i++)
            scanf("%lld",&A[i]);
        int i=0;
        long long int area=0,ans=0;
        for(int i=0;i<t;i++)
        {
            if(A[i]==0)
            {
                ans+=S.size();
                while(S.size()!=0)
                    S.pop();
            }
            else if(S.size()==0)
                S.push(A[i]);
            else
            {
                if(S.top()>=A[i])
                {
                    //cout<<i<<" "<<S.top()<<endl;
                    while(S.size()!=0&&S.top()>=A[i])
                    {
                        //cout<<S.size()<<endl;
                        if(S.top()==A[i])
                            S.pop();
                        else
                        {
                            ans++;
                            S.pop();
                        }
                    }
                    S.push(A[i]);
                }
                else
                    S.push(A[i]);
            }
            //cout<<ans<<endl;
        }
        //cout<<ans<<endl;
        ans+=S.size();
        printf("Case %d: %lld\n",count++,ans);
    }

}
