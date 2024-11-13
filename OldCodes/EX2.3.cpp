#include<iostream>
using namespace std;
int a[100],n;
bool check()
{
  for(int i=1,j=n;i<=j;i++,j--)
    if(a[i]!=a[j])
      return false;
  return true;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  if(!check())
    cout<<"not palindrome"<<endl;
  else
    cout<<"palindrome!"<<endl;
}
//1+3n+2n+1+1+2=5n
//O(5n) = O(n) != O(n^2)=O(n^2+n)
