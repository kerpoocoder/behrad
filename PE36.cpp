#include<iostream>
#include<vector>
using namespace std;
int ans;
bool is_pal(vector<int> v)
{
  for(int i=0,j=v.size()-1;i<j;i++,j--)
    if(v[i]!=v[j])
      return false;
  return true;
}
vector<int> change_base(int x,int b)
{
  vector<int> ret;
  while(x)
    {
      ret.push_back(x%b);
      x/=b;
    }
  return ret;
}
int main()
{
  for(int i=1;i<1000000;i++)
    if(is_pal(change_base(i,2)) && is_pal(change_base(i,10)))
      ans+=i;
  cout<<ans<<endl;
}
