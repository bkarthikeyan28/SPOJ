#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
    int t;
    long long int n,A[100005];
    cin>>t;
    long long int maxi[100005],ways[100005];
    for(int i=0;i<=100003;i++)
    {
        maxi[i]=0;ways[i]=0;
    }
    while(t--)
    {
        scanf("%lld",&n);
        for(int i=0;i<n;i++)
            scanf("%lld",&A[i]);
        long long int a=A[0],b=A[0];
        maxi[0]=A[0];ways[0]=1;
        long long int temp=maxi[0];
        long long int way=ways[0];
        for(int i=1;i<n;i++)
        {
            if(maxi[i-1]+A[i]>A[i])
            {
                maxi[i]=A[i]+maxi[i-1];
                ways[i]=ways[i-1];
            }
            else if(maxi[i-1]+A[i]==A[i])
            {
                maxi[i]=maxi[i-1]+A[i];
                ways[i]=ways[i-1]+1;
            }
            else if(maxi[i-1]+A[i]<A[i])
            {
                maxi[i]=A[i];
                ways[i]=1;
            }
            if(maxi[i]>temp)
            {
                temp=maxi[i];
                way=ways[i];
            }
            else if(maxi[i]==temp)
                way+=ways[i];
        }
        printf("%lld %lld\n",temp,way);
    }

}
