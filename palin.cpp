#include<iostream>
using namespace std;
int main()
{
    int t;
    char A[1000006];
    cin>>t;
    while(t--)
    {
        cin>>A;
        int n=strlen(S);
        for(int i=0;i<n/2;i++)
        {
            if(A[i]==A[n-i])
                continue;
            else if(A[i]>A[n-i])
            {
                f=0;
                A[n-i]=A[i];
            }
            else if(A[i]<A[n-i])
            {
                f=1;
                A[n-i]=A[i];
            }
        }
    }

}
