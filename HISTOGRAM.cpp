#include<iostream>
#include<stack>
using namespace std;
int main()
{
    long long int t,A[100007];
    cin>>t;
    while(t!=0)
    {
        stack<long long int>S;
        long long int count=0;
        long long int ans=0,area=0,top;
        for(int i=0;i<t;i++)
            scanf("%lld",&A[i]);
        long long int i=0;
        while(i<t)
        {
            if(S.size()==0||A[S.top()]<=A[i])
                S.push(i++);
            else
            {
                top=S.top();
                S.pop();
                if(S.empty())
                    area=A[top]*(i);
                else area=A[top]*(i-S.top()-1);
                ans=max(ans,area);
            }
        }
        while(S.size()!=0)
        {
            //cout<<S.top()<<endl;
            top=S.top();
            S.pop();
            if(S.empty())
                area=A[top]*(i);
            else area=A[top]*(i-S.top()-1);
            //cout<<area<<endl;
            ans=max(ans,area);
        }
        printf("%lld\n",ans);
        scanf("%lld",&t);


    }
}
