#include<iostream>
using namespace std;
int t,n;
int F[2005][2005],a[2005],v;
int main()
{
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            F[i][i]=a[i]*n;
        }
        for(int i=n-2;i>=0;--i)
        {
		for(int j=i+1;j<n;++j)
		{
			v=n-j+i;
			F[i][j]=max(F[i+1][j]+(v)*a[i] , F[i][j-1]+(v)*a[j]);
		}
        }
        cout<<F[0][n-1]<<endl;


}
