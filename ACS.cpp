#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    char S;
    int R[1236];
    int C[5680];
    for(int i=1;i<=1234;i++)
        R[i]=i;
    for(int j=1;j<=5678;j++)
        C[j]=j;
    int x,y,a,b;
    while(scanf("%c",&S)!=EOF)
    {
        if(S=='R')
        {
            scanf("%d%d",&a,&b);
            swap(R[a],R[b]);
        }
        else if(S=='C')
        {
            scanf("%d%d",&a,&b);
            swap(C[a],C[b]);
        }
        else if(S=='Q')
        {
            scanf("%d%d",&a,&b);
            long long int ans=5678*(R[a]-1);
            ans+=C[b];
            printf("%lld\n",ans);
        }
        else if(S=='W')
        {
            scanf("%d",&a);
            y=a%5678;
            if(y==0)
                y=5678;
            double x1;
            x1=ceil((a*1.0)/5678);
            x=(int)x1;
            printf("%d %d\n",R[x],C[y]);
        }

    }
}
