#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int >arr;
  int n,i,j,rod;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>j;
    arr.push_back(j);
  }
  cin>>rod;
  int mat[1000][1000];
  for(i=0;i<=n;i++)
  mat[0][i]=0;
  for(i=0;i<=rod;i++)
  mat[i][0]=0;
  for(i=1;i<=rod;i++)
  {
  for(j=1;j<=n;j++)
  {
    if(i>=j)
    {
      mat[i][j]=max(mat[i-j][j]+arr[j-1],mat[i][j-1]);
    }
    else
    mat[i][j]=mat[i][j-1];
  }
  }
  for(i=0;i<=rod;i++)
  {
    for(j=0;j<=n;j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
