#include<iostream>
using namespace std;
int arr[200006],temp[200006];
long long int merge(int lo,int mid,int hi){
	int i=lo,j=mid+1,k=lo;
	long long int ans=0;
	while(i<=mid && j<=hi){
		if(arr[i] <= arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
			ans+=mid-i+1;
		}
	}
	while(i<=mid)	temp[k++]=arr[i++];
	while(j<=hi)	temp[k++]=arr[j++];
	for(i=lo;i<=hi;i++)
		arr[i]=temp[i];
	return ans;
}
long long int mergesort(int lo,int hi){
	if(hi>lo){
		int mid=(hi+lo)/2;
		return mergesort(lo,mid)+mergesort(mid+1,hi)+merge(lo,mid,hi);
	}
	return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        cout<<endl;
        long long int ans=mergesort(0,n-1);
        cout<<ans<<endl;
    }

}
