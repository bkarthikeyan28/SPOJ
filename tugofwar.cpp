#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int t,A[10000005],visited[10000005]={0};
int main()
{
    cin>>t;
    while(t--)
    {
       int n,f=1,sum=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
            scanf("%d",&A[i]);
            sum+=A[i];
       }
       for(int i=0;i<=sum;i++)
            visited[i]=0;
       visited[0]=true;
       sum/=2;
       int max=0;
       for(int i=0;i<n;i++)
        {
            f=1;
            for(int j=max+A[i];j>=A[i];j--)
            {
                if(j<=sum)
                {
                    if(visited[j-A[i]])
                    {
                        if(visited[j]==true)
                        {
                            cout<<"YES"<<endl;
                            f=0;
                            break;
                        }
                        visited[j]=true;
                    }
                }
            }
            max+=A[i];
            if(f==0)
            {
                break;
            }
       }
       if(f==1)
        cout<<"NO"<<endl;


    }
}
