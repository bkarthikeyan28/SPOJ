#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int t,F[1005];
    cin>>t;
    while(t!=0)
    {
        stack<int>A;
        stack<int>B;
        for(int i=0;i<t;i++)
            cin>>F[i];
        int first=1;
        for(int i=0;i<t;i++)
        {
            if(B.size()>0)
            {
                while(B.top()==first)
                {
                    A.push(B.top());
                    B.pop();
                    first++;
                    if(B.size()==0)
                        break;
                }
            }
            if(F[i]!=first)
            {
                B.push(F[i]);continue;
            }
            A.push(F[i]);
            first++;
        }
        while(B.size()!=0)
        {
            if(B.top()!=first)
            {
                cout<<"no"<<endl;
                break;
            }
            else
            {
                B.pop();first++;
            }
        }
        if(B.size()==0)
            cout<<"yes"<<endl;
        cin>>t;
    }

}

