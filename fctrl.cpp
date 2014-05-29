#include<iostream>
#include<stdint.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans[150]={1},sum=0,carry=0,k=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                ans[j]*=i;
                ans[j]+=carry;
                carry=ans[j]/10;
                ans[j]=ans[j]%10;
            }
            while(carry)
            {
                k++;
                ans[k]=carry%10;
                carry=carry/10;
            }
        }
        for(int i=k;i>=0;i--)
        {
            cout<<ans[i];
        }
        cout<<endl;

    }

}
