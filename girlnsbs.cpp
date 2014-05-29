#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int g,b,x,y,ans,temp;
    cin>>g>>b;
    while(g!=-1||b!=-1)
    {
        ans=INT_MAX;
        if(g>b)
            swap(g,b);
        if(g==0)
        {
            cout<<b<<endl;
            cin>>g>>b;
            continue;
        }
        ans=(g+b)/(g+1);
        cout<<ans<<endl;
        cin>>g>>b;
    }

}
