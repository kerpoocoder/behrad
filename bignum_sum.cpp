#include<iostream>
using namespace std;
int n,m,a[100],b[100],c[100],carry;
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>m;
  for(int i=0;i<m;i++)
    cin>>b[i];
  int carry=0;
  for(int i=0;i<100;i++)
    {
      c[i]=a[i]+b[i]+carry;
      carry=c[i]/10;
      c[i]%=10;
    }
  for(int i=99;i>=0;i--)
    cout<<c[i];
  
}
/*
  4529=4*1000 + 5*100 + 2*10 + 9*1

 1001110
 0874843
+0321657
 -------
 1196500
 */
