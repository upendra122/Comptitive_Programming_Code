#include<iostream>
using namespace std;

int main()
{
  int n,m,amount,i,j;
  int mat[1000][1000],coins[100];
  cin>>amount;
  cin>>m;
  for(i=0;i<m;i++)
  {
    cin>>coins[i];
  }
  for(i=0;i<=amount;i++)
  {
    mat[i][0]=0;
  }
  for(i=0;i<=m;i++)
  {
    mat[0][i]=1;
  }
  for(i=1;i<=amount;i++)
  {
    for(j=1;j<=m;j++)
    {
        if(coins[j-1]<=i)
        mat[i][j]=mat[i-coins[j-1]][j]+mat[i][j-1];
        else
        mat[i][j]=mat[i][j-1];
    }
  }
  for(i=0;i<=amount;i++)
  {
    for(j=0;j<=m;j++)
    {
      cout<<mat[i][j];
    }
    cout<<endl;
  }

cout<<mat[amount][m];
return 0;
}
