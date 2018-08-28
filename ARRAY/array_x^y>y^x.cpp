#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int *arr1,*arr2,i,j;
	int len1,len2;
	int count=0;
	cin>>len1;
	arr1=new int[len1];
	for(i=0;i<len1;i++)
	{
		cin>>arr1[i];
	}
	cin>>len2;
	arr2=new int[len2];
	for(i=0;i<len2;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(pow(arr1[i],arr2[j])>pow(arr2[j],arr1[i]))
				count++;
		}
	}
cout<<"No of pairs::"<<count;

}