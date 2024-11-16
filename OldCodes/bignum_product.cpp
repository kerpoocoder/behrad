#include<iostream>
using namespace std;
int n,k,a[100];
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>k;
  int carry=0;
  for(int i=0;i<100;i++)
    {
      a[i]=a[i]*k+carry;
      carry=a[i]/10;
      a[i]%=10;
    }
  for(int i=99;i>=0;i--)
    cout<<a[i];
    
}

/*
  6*10^8 + 8*10^7 + ... + 8*10^2 + 4*10 + 1
*/
