#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num)
{
	int i,limit=sqrt(num);
	if(num==0||num==1)
	return false;
	if(num<0)
	cout<<"Prime is not considered for negattive no";
	for (i=2;i<=limit;i++)
	{
		if(num%i==0)
		return false;
	}
	return true;
	
}
void genPrime(int num)
{
	int i,limit=sqrt(num),temp;
	int test=num;
	//the loop goes to the number if factors need to be 
	//generated in increasing order
	for(i=2;i<=test;i++)
	{
		if(isPrime(i)&&num%i==0)
		{
			while(num%i==0)
			{
				cout<<i<<" ";
				num=num/i;
			}
		}
	}
}
int main()
{
	int num;
	cin>>num;
	genPrime(num);
	return 0;
}