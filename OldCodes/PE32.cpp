#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int a[]={1,2,3,4,5,6,7,8,9},ans;
set<int>s;
int getint(int l,int r)
{
  int ret=0;
  for(int i=l;i<=r;i++)
    {
      ret*=10;
      ret+=a[i];
    }
  return ret;
}
int main()
{
  do{
    for(int i=0;i<7;i++)
      for(int j=i+1;j<8;j++)
	if(getint(0,i)*getint(i+1,j)==getint(j+1,8))
	  s.insert(getint(j+1,8));
  }while(next_permutation(a,a+9));

  for(auto x:s)
    ans+=x;
  cout<<ans<<endl;
  
}
