#include<iostream>
using namespace std;
int C(int n,int k)
{
  if(k==0)
  return 1;
  else if(k==n)
  return 1;
  return C(n-1,k-1)+C(n-1,k);
}
int main()
{
  int n,k,i,j;
  cin>>n>>k;
  int mat[1000][1000];
  for(i=0;i<k;i++)
  mat[0][i]=0;
  for(i=0;i<n;i++)
  mat[i][0]=1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=k;j++)
    {
      mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
    }
  }
  cout<<mat[n][k];
  return 0;
}
