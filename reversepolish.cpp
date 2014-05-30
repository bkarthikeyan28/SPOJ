#include<iostream>
#include<string.h>
using namespace std;
#include<cmath>
 int number(char A[])
    {
        int n=strlen(A),numb=0,f=1;
        for(int i=0;i<n;i++)
        {
            if(A[i]=='-')
            {
                f=0;
                continue;
            }
            else if(A[i]=='+')
            {
                f=1;
                continue;
            }
            numb+=(A[i]-'0')*pow(10,n-i-1);
        }
        if(f==0)
            return numb*-1;
        else return numb;
    }
using namespace std;
    int main() {
        int temp;
        char temp1[100];
        string S="0";
        strcpy(temp1,S.c_str());
        int x=number(temp1);
        cout<<x;


    }
