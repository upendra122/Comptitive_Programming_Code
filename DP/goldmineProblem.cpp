#include<iostream>
#include<cstring>
using namespace std;
int MaxGold(int gold[][100],int m,int n)
{
  int Gold[100][100],right,rightup,rightdn,i,j;
  memset(Gold,0,sizeof(Gold));
  for(i=0;i<m;i++)
  Gold[i][n-1]=gold[i][n-1];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        cout<<Gold[i][j]<<" ";
    }
    cout<<endl;
  }
  for(i=0;i<m;i++)
  {
    for(j=n-2;j>=0;j--)
    {
      right=Gold[i][j+1];
      rightup=i-1<0?0:Gold[i-1][j+1];
      rightdn=i+1>m-1?0:Gold[i+1][j+1];
      Gold[i][j]=gold[i][j]+max(right,max(rightdn,rightup));
    }
  }
    int res=Gold[0][0];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<Gold[i][j]<<" ";
      res=max(res,Gold[i][j]);
    }
    cout<<endl;
  }
  return res;
}
int main()
{
  int Gold[100][100];
  int m,n,i,j;
  cin>>m>>n;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    cin>>Gold[i][j];
  }
  cout<<MaxGold(Gold,m,n);
}
