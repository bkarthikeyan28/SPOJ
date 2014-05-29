#include<iostream>
using namespace std;
int main()
{
    long long int t,n,A[1000005],init,ans;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%lld",&A[i]);
        init=1;ans=1;
        for(int i=0;i<n;i++)
        {
            if(init+A[i]<=0)
            {
                ans+=abs(init+A[i])+1;
                init=1;
            }
            else init=init+A[i];
        }
        printf("Scenario #%d: %lld\n",k,ans);

    }
}
