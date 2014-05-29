#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long double a,b,c,d,s,temp,ans;
    cin>>a>>b>>c>>d;
    s=a+b+c+d;
    s*=1.0;
    s/=2;
    temp=(s-a)*(s-b)*(s-c)*(s-d)*(1.0);
    //cout<<temp<<endl;
    ans=sqrt(temp);
    printf("%.2Lf\n",ans);
    }
}
