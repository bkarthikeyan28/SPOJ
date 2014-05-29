#include<iostream>
using namespace std;
int digit(long long int a)
{
    int count=0;
    while(a!=0)
    {
        count++;
        a=a/10;
    }
    return count;
}
int main()
{
    long long int a,b,A[15],temp;
    A[1]=45;
    for(int i=2;i<=9;i++)
    {
        if(i==2)
            A[i]=19*45;
        else
        {
            temp=9*pow(10,i-1)*45;
            temp+=10*A[i-1];
            A[i]=temp;
        }
    }
    cin>>a>>b;
    while(a!=-1)
    {
        x=digit(a);
        y=digit(b);


    }

}
