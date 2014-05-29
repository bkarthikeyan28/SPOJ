#include<iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n!=0)
    {
        int a,b,c,d,e,f,x;
        d=0,e=0;
        for(int i=0;i<n;i++)
        {
            a=0,b=0;
            for(int j=0;j<m;j++)
            {
                    scanf("%d",&x);
                    c=max(x+a,b);
                    a=b;
                    b=c;
            }
            f=max(b+d,e);
            d=e;
            e=f;
        }
        printf("%d\n",e);
        scanf("%d%d",&n,&m);
    }

}
