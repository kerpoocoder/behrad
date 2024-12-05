#include<iostream>
#include<vector>
using namespace std;
vector<int>ab;
int ans;
bool mark[30005];
int divs(int x)
{
  int ret=0;
  for(int i=2;i*i<=x;i++)
    {
      if(x%i==0)
	ret+=i+x/i;
      if(i*i==x)
	ret-=i;
    }
  return ret+1;
}
int main()
{
  for(int i=1;i<=30000;i++)
    if(divs(i)>i)
      {
	ab.push_back(i);
	for(auto x:ab)
	  if(i+x<30000)
	    mark[i+x]=true;
      }
  cout<<ab.size()<<endl;
  for(int i=1;i<30000;i++)
    if(!mark[i])
      ans+=i;
  cout<<ans<<endl;
}
//30000+7000^2
