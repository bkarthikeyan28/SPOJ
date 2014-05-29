#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    long double a,b,c,d,x;
    cin>>t;
    while(t--)
    {
        int n,f=1;
        cin>>n;
        a=-1,b=-1,c=-1,d=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%Lf",&x);
            if(f==1)
            {
            if(x<1)
            {
                if(b!=-1&&f==1)
                {
                    if(x+b>1&&x+b<2)
                    {
                        printf("found\n");
                        f=0;
                    }
                }
                if(d!=-1&&f==1)
                {

                    if(x+d>1&&x+d<2)
                    {
                        printf("found\n");
                        f=0;
                    }
                }
                if(c!=-1&&f==1)
                {

                    if(x+c>1&&x+c<2)
                    {
                        printf("found\n");
                        f=0;
                    }
                }
            }
            else
            {
                if(a!=-1&&f==1)
                {
                    if(x+a>1&&x+a<2)
                    {
                        printf("found\n");f=0;
                    }
                }
                if(b!=-1&&f==1)
                {
                    if(x+b>1&&x+b<2)
                    {
                        printf("found\n");f=0;
                    }
                }

            }
            }
            if(f==1)
            {
            if(x<1)
            {
                if(a==-1)
                    a=x;
                if(b==-1)
                    b=x;
                else
                {
                    a=min(a,x);
                    b=max(b,x);
                }
            }
            if(x<2&&x>=1)
            {
                if(c==-1)
                    c=x;
                if(d==-1)
                    d=x;
                else
                {
                    c=min(c,x);
                    d=max(d,x);
                }
            }
            }
            //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
        if(f==1)
                printf("not found\n");

    }

}
