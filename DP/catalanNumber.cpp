#include<iostream>
using namespace std;
int main()
{
  int arr[100]={0},n,i,j;
  arr[0]=1;
  arr[1]=1;
  cin>>n;
  for(i=2;i<=n;i++)
  {
    for(j=0;j<i;j++)
    arr[i]+=arr[j]*arr[i-j-1];
  }
  cout<<arr[n-1];
  return 0;
}
