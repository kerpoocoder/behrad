#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0)
    return 1;
  return fact(n-1)*n;
}
int main()
{
  cout<<fact(10)<<endl;
}
/*
  n!=n*(n-1)!
  f(n)=n!
  f(n)=f(n-1)*n

  fact(n): O(n)

  T(n)=T(n-1)+1
 */
