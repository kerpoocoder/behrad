#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
ifstream fin("input22.txt");
string s,t;
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
  for(int i=0;i<s.size();i++)
    if(s[i]=='"' || s[i]==',')
      s[i]=' ';
  istringstream sin(s);
  while(sin>>t)
    v.push_back(t);
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
    ans+=(i+1)*f(v[i]);

  cout<<ans<<endl;
  
}
