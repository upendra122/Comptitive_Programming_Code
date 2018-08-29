#include<iostream>
#include<vector>
using namespace std;
int *arrw,*arrc;
int n,wt,i;
int max(int a,int b)
{
  return a>b?a:b;
}
int knap(int wt,int k)
{
  if(k==n)
  return 0;
  if(wt<=0||wt<arrw[k])
  return 0;
  return max(knap(wt-arrw[k],k+1)+arrc[k],knap(wt,k+1));
}
int main()
{
  cin>>n;
  vector<vector<int> >t1;
  t1[0].push_back(10);
  t1[1].push_back(11);
  t1[2].push_back(12);
  cout<<t1.size()<<endl;
  arrw=new int[n];
  arrc=new int[n];
  for(i=0;i<n;i++)
  cin>>arrw[i];
  for(i=0;i<n;i++)
  cin>>arrc[i];
  cin>>wt;
  cout<<knap(wt,0);

}
