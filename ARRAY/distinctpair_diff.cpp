#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int *arr1,*arr2,i,j,len1,len2,count=0;
	int diff;
	cin>>len1;
	cin>>len2;
	arr1=new int[len1];
	arr2=new int[len2];
	for ( i = 0; i < len1; ++i)
	{
		cin>>arr1[i];
	}
	for(i=0;i<len2;i++)
	{
		cin>>arr2[i];
	}
	cin>>diff;
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(abs(arr1[i]-arr2[j])==diff)
			{
				count++;
				cout<<arr1[i]<<" "<<arr2[j]<<" ";
			}
		}
	}
	cout<<""<<count;
}