#include<iostream>
#include<algorithm>
using namespace std;
struct data
{
    int pos;
    long long int height;
};
bool comp(struct data A,struct data B)
{
    return A.height>B.height;
}
int main()
{
    struct data A[100005];
    int minpos[100005],maxpos[100005];
    int t,n;
    long long int ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&A[i].height);
            A[i].pos=i;
        }
        sort(A,A+n,comp);
        minpos[0]=A[0].pos;
        maxpos[0]=A[0].pos;
        for(int i=1;i<n;i++)
        {
            maxpos[i]=max(maxpos[i-1],A[i].pos);
            minpos[i]=min(minpos[i-1],A[i].pos);
        }
        for(int i=0;i<n;i++)
        {
            //cout<<maxpos[i]<<" "<<minpos[i]<<" "<<A[i].pos<<" "<<A[i].height<<endl;
            ans=max(ans,max(A[i].height*abs(A[i].pos-maxpos[i]),A[i].height*abs(A[i].pos-minpos[i])));
        }
        printf("%lld\n",ans);

    }

}
