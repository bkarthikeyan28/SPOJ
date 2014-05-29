#include<iostream>
using namespace std;
int main()
{
    int n,x=1,sub=0,ans=0;
    cin>>n;
    int temp=n/x;
    while(temp>0)
    {
        ans+=temp;
        sub++;x++;
        temp=(n/x)-sub;
    }
    cout<<ans;
}
