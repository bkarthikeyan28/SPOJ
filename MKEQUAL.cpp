#include<iostream>
using namespace std;
int main()
{
    int t,n,x;
    long long int sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            sum+=x;
        }
        if(sum%n==0)
            printf("%d\n",n);
        else printf("%d\n",n-1);

    }

}
