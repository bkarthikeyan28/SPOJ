#include<iostream>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,m,A[11000],B[11000],sum1,sum2;
    cin>>n;
    while(n!=0)
    {
        sum1=0,sum2=0;
        for(int i=0;i<n;i++)
            cin>>A[i];
        cin>>m;
        for(int j=0;j<m;j++)
            cin>>B[j];
        int a=n-1,b=m-1;
        map<int,int>S;
        map<int,int>T;
        while(a>0||b>0)
        {
            if(S[a]!=1&&a>=0)
            {
                sum1+=A[a];S[a]=1;
                //cout<<sum1<<" ";
            }
            if(T[b]!=1&&b>=0)
            {
                sum2+=B[b];T[b]=1;
                //cout<<sum2<<endl;
            }
            //cout<<sum1<<" "<<sum2<<endl;
            if(A[a]>B[b])
            {
                if(a>0)
                    a--;
                else
                    b--;
            }
            else if(A[a]<B[b])
            {
                if(b>0)
                    b--;
                else a--;
            }
            else
            {
                sum1=max(sum1,sum2);
                sum2=sum1;
                if(a>0)
                    a--;
                if(b>0)
                    b--;
            }

        }
        if(S[a]!=1&&a>=0)
            {
                sum1+=A[a];S[a]=1;
                //cout<<sum1<<" ";
            }
            if(T[b]!=1&&b>=0)
            {
                sum2+=B[b];T[b]=1;
                //cout<<sum2<<endl;
            }
        cout<<max(sum1,sum2)<<endl;
        cin>>n;
    }

}
