#include<iostream>
#include<vector>
using namespace std;
int main()
{
  pair<int,int>p=make_pair(3,4);
  pair<int,string>s;
  s.first=6;
  s.second="ali";
  p={4,9};
  cout<<p.first<<" "<<p.second<<endl;
  vector<pair<int,pair<string,double>>>v;
  v.push_back(make_pair(2,make_pair("ali",3.3)));
}
