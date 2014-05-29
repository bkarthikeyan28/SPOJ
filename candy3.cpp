#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned long long int x,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            sum%=n;
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
