#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long double x;
    while(t--)
    {
        scanf("%Lf",&x);
        for(long long int i=1;;i++)
        {
            if((long long int)(x*i*1.0)==(x*i*1.0))
            {
                printf("%lld\n",i);
                break;
            }
        }

    }
}
