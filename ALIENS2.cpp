#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n+5],B[n+5],at1[n+5],at2[n+5],ans1,ans2;
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
    at1[0]=A[0];
    at2[0]=B[0];
    for(int i=1;i<n;i++)
    {
        at1[i]=min(A[i]+B[i]+at2[i-1],at1[i-1]+A[i]);
        at2[i]=min(A[i]+B[i]+at1[i-1],B[i]+at2[i-1]);
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<at1[i]<<" "<<at2[i]<<endl;
    }*/
    ans1=min(at1[0],at2[0]),ans2=1;
    if(ans1>k)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(min(at1[i],at2[i])>k)
        {
            break;
        }
        else
        {
            ans2++;
            ans1=min(at1[i],at2[i]);
        }
    }
    cout<<ans2<<" "<<ans1<<endl;
}
