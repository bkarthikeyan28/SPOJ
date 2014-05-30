#include<iostream>
#include<limits.h>
#define MOD 100
using namespace std;
int main()
{
    int t,val[105][105],smoke[105][105],A[105];
    while(scanf("%d",&t)!=EOF)
    {
        if(t==1)
        {
            scanf("%d",&A[0]);
            cout<<0<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<t;i++)
            {
                scanf("%d",&A[i]);
            }
            val[0][0]=A[0];
            smoke[0][0]=0;
            for(int i=1;i<t;i++)
            {
                val[i-1][i]=(A[i-1]+A[i])%MOD;
                smoke[i-1][i]=A[i-1]*A[i];
                smoke[i][i]=0;
                val[i][i]=A[i];
            }
            for(int size=2;size<=t;size++)
            {
                for(int i=0;i<=t-size;i++)
                {
                    int j=i+size-1;
                    smoke[i][j]=INT_MAX;
                    for(int k=i;k<j;k++)
                    {
                        int temp=smoke[i][k]+smoke[k+1][j]+(val[i][k]*val[k+1][j]);
                        if(temp<smoke[i][j])
                        {
                            smoke[i][j]=temp;
                            val[i][j]=(val[i][k]+val[k+1][j])%100;
                        }
                    }
                }
            }
            cout<<smoke[0][t-1]<<endl;
        }
    }
}
