#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100],n;
int main()
{
  cin>>n;
  //for(int i=1;i<=n;i++)
  //  cin>>a[i];
  //sort(a+1,a+n+1);
  //for(int i=1;i<=n;i++)
  //cout<<a[i]<<" ";
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
}
