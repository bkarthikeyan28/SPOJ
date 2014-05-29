#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n,m;
        cin>>n>>m;
        int mark[n+100][m+100],val[n+5],A[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            val[i]=A[i];
        }
        //sort(A,A+n);
        //sort(val,val+n);
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                    mark[i][j]=0;
                else if(i==1)
                {
                    if(j>=val[i-1])
                        mark[i][j]=max(mark[i][j],val[0]);
                }
                else
                {
                if(j>=val[i-1])
                {
                    for(int l=2;l<=i;l++)
                    if(val[i-l]+mark[i-l][j-val[i-1]]<=m)
                        mark[i][j]=max(mark[i][j],val[i-1]+mark[i-l][j-val[i-1]]);
                }
                else mark[i][j]=mark[i-1][j];
                }
              //  cout<<mark[i][j]<<" ";
            }
            //cout<<endl;
        }
        printf("Scenario #%d: %d\n",k,mark[n][m]);
    }
}
