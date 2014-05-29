#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,A[1000000],B[1000000],m,t;
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int i=0;i<m;i++)
            cin>>B[i];
        int i=0,j=0;
        while(i!=n&&j!=m)
        {
            if(A[i]<B[j])
                i++;
            else j++;
        }
        if(i==n)
            cout<<"MechaGodzilla"<<endl;
        else cout<<"Godzilla"<<endl;
    }
}
