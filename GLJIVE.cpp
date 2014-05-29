#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
int ans=0,fin=0;
int A[15];
int main()
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        cin>>A[i];
        sum+=A[i];
        if(sum>=100)
        {
            if(abs(100-sum)>abs(100-sum+A[i]))
            {
                sum=sum-A[i];break;
            }
            else
            {
                break;
            }
        }
    }
    cout<<sum<<endl;

}
