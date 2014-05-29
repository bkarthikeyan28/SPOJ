#include<iostream>
#include<algorithm>
using namespace std;
int t,A[1005];
int main()
{
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int m,n,count=0,f=0;
        cin>>m>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        sort(A,A+n);
        long long int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=A[i];
            count++;
            if(sum>=m)
            {
                cout<<"Scenario #"<<k<<":"<<endl<<count<<endl<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"Scenario #"<<k<<":"<<endl<<"impossible"<<endl<<endl;
    }
}
