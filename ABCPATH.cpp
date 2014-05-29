#include<iostream>
using namespace std;
int A[100][100],visited[100][100],temp,n,m;
int check(int i,int j)
{
    if(i<0||i>n-1||j<0||j>m-1)
        return 0;
    else return 1;
}
void dfs(int i,int j,int ans)
{
    if(i<0||i>n-1||j<0||j>m-1)
        return;
    visited[i][j]=1;
    //cout<<(A[i][j])<<" "<<prev+1<<endl;
    int f=A[i][j];
    temp=max(ans,temp);
    if(check(i+1,j))
    {
        if(A[i+1][j]==f+1)
            dfs(i+1,j,ans+1);
    }
    if(check(i-1,j))
    {
        if(A[i-1][j]==f+1)
            dfs(i-1,j,ans+1);
    }
    if(check(i,j-1))
    {
        if(A[i][j-1]==f+1)
            dfs(i,j-1,ans+1);
    }
    if(check(i,j+1))
    {
        if(A[i][j+1]==f+1)
            dfs(i,j+1,ans+1);
    }
    if(check(i-1,j-1))
    {
        if(A[i-1][j-1]==f+1)
            dfs(i-1,j-1,ans+1);
    }
    if(check(i-1,j+1))
    {
        if(A[i-1][j+1]==f+1)
            dfs(i-1,j+1,ans+1);
    }
    if(check(i+1,j-1))
    {
        if(A[i+1][j-1]==f+1)
            dfs(i+1,j-1,ans+1);
    }
    if(check(i+1,j+1))
    {
        if(A[i+1][j+1]==f+1)
            dfs(i+1,j+1,ans+1);
    }
}
int main()
{
    cin>>n>>m;
    char x[2];
    int count=1;
    while(n!=0&&m!=0)
    {
        temp=-10000;
        for(int i=0;i<60;i++)
        {
            for(int j=0;j<60;j++)
                visited[i][j]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%s",x);
                A[i][j]=(int)x[0];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j])
                    dfs(i,j,1);
            }
        }
        printf("Case %d: %d\n",count,temp);
        count++;
        scanf("%d%d",&n,&m);
    }
}

