#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n,A[1000007],k,C[1000006];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    cin>>k;
    deque<int>B;
    for(int i=0;i<k;i++)
    {
        while(B.size()!=0&&A[i]>=A[B.back()])
            B.pop_back();
        B.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        C[i-k]=A[B.front()];
         while(B.size()!=0&&A[i]>=A[B.back()])
            B.pop_back();
        while(B.size()!=0&&B.front()<=(i-k))
            B.pop_front();
        B.push_back(i);
    }
    C[n-k]=A[B.front()];
    for(int i=0;i<=n-k;i++)
        cout<<C[i]<<" ";
}

