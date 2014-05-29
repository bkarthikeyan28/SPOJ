#include<iostream>
#include<math.h>
using namespace std;
int n,B[105];
bool A[105][100099];
bool visited[100099];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
            sum+=B[i];
        }
        for(int i=0;i<=sum+4;i++)
            visited[i]=0;
        for(int i=0;i<=n;i++)
            A[i][0]=true;
        for(int i=1;i<=sum;i++)
            A[0][i]=false;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                A[i][j]=A[i-1][j];
                if(j>=B[i-1])
                {
                    A[i][j]=A[i][j]||A[i-1][j-B[i-1]];
                }

            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(A[i][j])
                {
                    if(!visited[j])
                    {
                        visited[j]=true;
                        ans+=j;
                    }
                }
            }
        }
        cout<<ans<<endl;

    }
}

