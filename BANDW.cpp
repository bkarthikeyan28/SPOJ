#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char A[505],B[505];
    scanf("%s %s",A,B);
    int f;
    while(A[0]!='*')
    {
        int ans=0;
        if(A[0]!=B[0])
        {
            f=1;ans++;
        }
        else
        {
            f=0;
        }
        for(int i=1;i<strlen(A);i++)
        {
            if(A[i]!=B[i])
            {
                if(f==0)
                {
                    f=1;ans++;continue;
                }
            }
            if(A[i]==B[i])
            {
                if(f==1)
                {
                    f=0;
                    continue;
                }
            }
        }
        printf("%d\n",ans);
        scanf("%s %s",A,B);
    }

}
