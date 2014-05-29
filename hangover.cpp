#include<iostream>
using namespace std;
int main()
{
    long double a,b;
    cin>>b;
    while(b!=0)
    {
        a=0.0;
        for(int i=1;;i++)
        {
            a+=(1*(1.0)/(i+1));
            //cout<<a<<endl;
            if(a>=b)
            {
                cout<<i<<" card(s)"<<endl;
                break;
            }
        }
            cin>>b;
    }
}
