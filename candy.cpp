#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,A[100005],sum;
    cin>>t;
    while(t!=-1)
    {
        sum=0;
        for(int i=0;i<t;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        if(sum%t!=0)
        {
            cout<<-1<<endl;
            cin>>t;
            continue;
        }
        else
        {
            int temp=sum/t,ans=0;
            sort(A,A+t);
            int first=0,last=t-1;
                while(A[first]!=temp)
                {
                    if(A[last]>(temp-A[first]+temp))
                    {
                        A[last]-=(temp-A[first]);
                        A[first]=temp;
                        first++;
                        ans++;
                        //first=0;last=t-1;
                        //sort(A,A+t);
                        /*for(int i=0;i<t;i++)
                            cout<<A[i]<<" ";
                        cout<<endl;*/
                    }
                    else
                    {
                        A[first]+=(A[last]-temp);
                        A[last]=temp;
                        ans++;
                        last--;
                        if(A[first]==temp)
                            first++;
                        first=0;last=t-1;
                        sort(A,A+t);
                        /*for(int i=0;i<t;i++)
                            cout<<A[i]<<" ";
                        cout<<endl;*/
                    }
                }
            cout<<ans<<endl;
            cin>>t;
        }
    }

}
