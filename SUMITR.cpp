#include<iostream>
#define L(i,s,e)for(i=s;i<=e;i++)
using namespace std;int a[100][100],t,n,i,j;main(){cin>>t;while(t--){cin>>n;L(i,1,n)L(j,1,i)cin>>a[i][j];L(i,2,n)L(j,1,n)a[i][j]+=max(a[i-1][j],a[i-1][j-1]);L(i,1,n)j=max(j,a[n][i]);printf("%d\n",A[1][1]);}}
