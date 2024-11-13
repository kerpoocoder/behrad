#include<iostream>
using namespace std;
bool prime(long long x)
{
  for(long long i=2;i<x;i++)
    if(x%i==0)
      return false;
  return true;
}
int main()
{
  long long n;
  cin>>n;
  cout<<prime(n)<<endl;
}
