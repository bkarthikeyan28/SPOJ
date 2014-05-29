#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double s;
    while(a!=0||b!=0||c!=0)
    {
        if((b-a)==(c-b))
            cout<<"AP "<<c+c-b<<endl;
        else
        {
            s=c*c*(1.0);
            s/=b;
            cout<<"GP "<<s<<endl;
        }
        cin>>a>>b>>c;
    }
}
