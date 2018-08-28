#include<iostream>
using namespace std;
int main()
{
	int *arr,i,j,n,sum,tempsum=0;
	bool flag=false;
	cin>>n;
	arr=new int[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	cin>>sum;
	j=0;
	for(i=0;i<n;i++)
	{
		while(tempsum+arr[i]>sum)
		{
			tempsum-=arr[j];
			j++;
		}
		tempsum+=arr[i];
		if(tempsum==sum)
		{
			for(j;j<=i;j++)
				cout<<arr[j]<<" ";
			flag=true;
			break;
		}
	}
	if(flag=false)
		cout<<"can not found such thing";
	return 0;
}
