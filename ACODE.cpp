#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    long long int ans=0;
    char A[5005];
    scanf("%s",A);
    while(A[0]!='0')
    {
        unsigned long long int dp[5005];
        ans=0;
        dp[0]=1;
        for(int i=1;i<strlen(A);i++)
        {
            if(A[i]-'0'==0&&i!=1)
                dp[i]=dp[i-2];
            else if(i==1)
            {
                if(((A[i-1]-'0')*10)+(A[i]-'0')>9&&((A[i-1]-'0')*10)+(A[i]-'0')<=26)
                {
                    if(A[i]=='0')
                        dp[i]=dp[i-1];
                    else
                        dp[i]=dp[i-1]+1;
                }
                else dp[i]=dp[i-1];
            }
            else
            {
                if(((A[i-1]-'0')*10)+(A[i]-'0')>9&&((A[i-1]-'0')*10)+(A[i]-'0')<=26)
                    dp[i]=dp[i-1]+dp[i-2];
                else dp[i]=dp[i-1];
            }

        }
        cout<<dp[strlen(A)-1]<<endl;
        scanf("%s",A);
    }

}
