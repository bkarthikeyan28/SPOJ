#include<iostream>
using namespace std;
int main()
{
    int n,L[1005],B[1005],dp[1005][3];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>L[i]>>B[i];
    }
    dp[0][0]=L[0];
    dp[0][1]=B[0];
    for(int i=1;i<n;i++)
    {
        dp[i][0]=max(abs(B[i]-L[i-1])+dp[i-1][1],abs(B[i]-B[i-1])+dp[i-1][0])+L[i];
        dp[i][1]=max(abs(L[i]-L[i-1])+dp[i-1][1],abs(L[i]-B[i-1])+dp[i-1][0])+B[i];
    }
    cout<<max(dp[n-1][0],dp[n-1][1]);

}
