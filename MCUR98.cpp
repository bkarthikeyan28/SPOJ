#include<iostream>
using namespace std;
bool visited[10000006];
long long int sum(int a)
{
    int ans=a,d;
    while(a!=0)
    {
        d=a%10;
        ans+=d;
        a=a/10;
    }
    return ans;
}
int main()
{
    for(int i=0;i<=1000000;i++)
        visited[i]=true;
    for(int i=1;i<1000000;i++)
    {
        visited[sum(i)]=false;
    }
    int count=0;
    for(int i=1;i<1000000;i++)
    {
        if(visited[i])
        {
            //count++;
            printf("%d\n",i);
        }
    }
   // cout<<count<<endl;

}
