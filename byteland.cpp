#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
long long int dp[10005];
long long int check(long long int n)
{
	if((n<10000))
	{
        if(dp[n]!=-1)
            return dp[n];
	}
	long long int x=n/2;
	long long int y=n/3;
	long long int z=n/4;
	long long int ans=check(x)+check(y)+check(z);
   	if(ans<n)
    {
        if(n<10000)
            dp[n]=n;
        return n;
    }
   	else
   	{
        if(n<10000)
            dp[n]=ans;
        return ans;
    }

}
int main()
{
    for(int i=0;i<10000;i++)
        dp[i]=-1;
    long long int n;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    dp[4]=4;
    dp[5]=5;
    //cout<<dp[6]<<endl;
    while(scanf("%lld",&n)!=EOF)
    {
        //cin>>n;
        if(n==0)
            cout<<0<<endl;
        else
            cout<<check(n)<<endl;
    }
}

