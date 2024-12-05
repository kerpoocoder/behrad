#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
ifstream fin("input22.txt");
string s;
vector<string>v;
int ans;
int f(string x)
{
  int ret=0;
  for(int i=0;i<x.size();i++)
    ret+=x[i]-'A'+1;
  return ret;
}
int main()
{
  fin>>s;
  int p=0,q=0;
  while(p<s.size())
    {
      // "COLIN"
      q=p+1;
      while(s[q]!='"')
	q++;
      v.push_back(s.substr(p+1,q-p-1));
      p=q+2;
    }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
    ans+=(i+1)*f(v[i]);
  cout<<ans<<endl;
}
