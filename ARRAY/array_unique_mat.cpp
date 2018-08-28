#include<iostream>
using namespace std;
int main()
{
	int **mat,*freq;
	int m,n,i,j,max;
	cin>>m;
	cin>>n;
	mat=new int*[m];
	for(i=0;i<m;i++)
		mat[i]=new int[n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>mat[i][j];
	}
	max=mat[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]>max)
				max=mat[i][j];
		}
	}	
	freq=new int[max+1];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			freq[mat[i][j]]++;
		}
	}
	cout<<"Unique elements";
	for(i=0;i<=max;i++)
	{
		if(freq[i]==1)
			cout<<i<<" ";
	}
	return 0;
}